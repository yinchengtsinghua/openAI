#!/usr/bin/python3
# -*- coding: utf-8 -*-

from pyaudio import PyAudio, paInt16
import numpy as np
from datetime import datetime
import wave
from aip import AipSpeech
import  os
import tkinter
from tkinter import filedialog
import time
class recoder:
    NUM_SAMPLES = 2000      #pyaudio内置缓冲大小
    SAMPLING_RATE = 8000    #取样频率
    LEVEL = 500         #声音保存的阈值
    COUNT_NUM = 20      #NUM_SAMPLES个取样之内出现COUNT_NUM个大于LEVEL的取样则记录声音
    SAVE_LENGTH = 8         #声音记录的最小长度：SAVE_LENGTH * NUM_SAMPLES 个取样
    TIME_COUNT = 60     #录音时间，单位s

    Voice_String = []

    def savewav(self,filename):
        wf = wave.open(filename, 'wb')
        wf.setnchannels(1)
        wf.setsampwidth(2)
        wf.setframerate(self.SAMPLING_RATE)
        wf.writeframes(np.array(self.Voice_String).tostring())
        # wf.writeframes(self.Voice_String.decode())
        wf.close()

    def recoder(self):
        pa = PyAudio()
        stream = pa.open(format=paInt16, channels=1, rate=self.SAMPLING_RATE, input=True,
            frames_per_buffer=self.NUM_SAMPLES)
        save_count = 0
        save_buffer = []
        time_count = self.TIME_COUNT

        while True:
            time_count -= 1
            # print time_count
            # 读入NUM_SAMPLES个取样
            string_audio_data = stream.read(self.NUM_SAMPLES)
            # 将读入的数据转换为数组
            audio_data = np.fromstring(string_audio_data, dtype=np.short)
            # 计算大于LEVEL的取样的个数
            large_sample_count = np.sum( audio_data > self.LEVEL )
            print(np.max(audio_data))
            # 如果个数大于COUNT_NUM，则至少保存SAVE_LENGTH个块
            if large_sample_count > self.COUNT_NUM:
                save_count = self.SAVE_LENGTH
            else:
                save_count -= 1

            if save_count < 0:
                save_count = 0

            if save_count > 0 :
            # 将要保存的数据存放到save_buffer中
                #print  save_count > 0 and time_count >0
                save_buffer.append( string_audio_data )
            else:
            #print save_buffer
            # 将save_buffer中的数据写入WAV文件，WAV文件的文件名是保存的时刻
                #print "debug"
                if len(save_buffer) > 0 :
                    self.Voice_String = save_buffer
                    save_buffer = []
                    print("Recode a piece of  voice successfully!")
                    return True
            if time_count==0:
                if len(save_buffer)>0:
                    self.Voice_String = save_buffer
                    save_buffer = []
                    print("Recode a piece of  voice successfully!")
                    return True
                else:
                    return False
# 读取文件
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()

def openfiles2():

        r = recoder()
        r.recoder()
        r.savewav("1.wav")
        # 识别本地文件
        result = aipSpeech.asr(get_file_content('1.wav'), 'wav', 8000, {
            'lan': 'zh',
        })

        print (result,result.keys())
        if "result"  in result.keys():
            print(result["result"][0])
            text.insert("insert", result["result"][0])
        time.sleep(3)


if __name__ == "__main__":
    """ 你的 APPID AK SK """
    APP_ID = '9588288'
    API_KEY = 'lchwrQNmq2868qS6rNFXYtNG'
    SECRET_KEY = 'EvlfpbVnUqWjq22EVpuR6Rjd56xV8sWg'
    aipSpeech = AipSpeech(APP_ID, API_KEY, SECRET_KEY)


    root = tkinter.Tk()
    root.title('语音识别')
    # root.geometry('500x300+500+200')
    btn1 = tkinter.Button(root, text='开始识别', font=("宋体", 20, 'bold'), width=13, height=8, command=openfiles2)
    text = tkinter.Text(root, width=30, height=2)  # 30的意思是30个平均字符的宽度，height设置为两行
    text.pack()
    btn1.pack()
    root.mainloop()


