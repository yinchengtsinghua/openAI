#coding:utf-8
from aip import AipSpeech
import  time
import pygame


""" 你的 APPID AK SK """
APP_ID = '9588288'
API_KEY = 'lchwrQNmq2868qS6rNFXYtNG'
SECRET_KEY = 'EvlfpbVnUqWjq22EVpuR6Rjd56xV8sWg'
aipSpeech = AipSpeech(APP_ID, API_KEY, SECRET_KEY)



result  = aipSpeech.synthesis('我是罗玉凤，我爱黄健,我是罗玉凤，我爱黄健,我是罗玉凤，我爱黄健', 'zh', 1,                      {
    'vol': 5,'spd': 5,'per':3
})

# 识别正确返回语音二进制 错误则返回dict 参照下面错误码
if not isinstance(result, dict):
    with open('auido.mp3', 'wb') as f:
        f.write(result)

'''
import pygame
filename="auido.mp3"
pygame.mixer.init()
pygame.mixer.music.load(filename)
pygame.mixer.music.play()
time.sleep(10)
'''

import mp3play
filename="auido.mp3"
player=mp3play.load(filename)
player.play()
time.sleep(10)

