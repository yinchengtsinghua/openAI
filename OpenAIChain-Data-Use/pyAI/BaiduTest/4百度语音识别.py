#coding:utf-8
from aip import AipSpeech
import  time
""" 你的 APPID AK SK """
APP_ID = '9588288'
API_KEY = 'lchwrQNmq2868qS6rNFXYtNG'
SECRET_KEY = 'EvlfpbVnUqWjq22EVpuR6Rjd56xV8sWg'
aipSpeech = AipSpeech(APP_ID, API_KEY, SECRET_KEY)

# 读取文件
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()

# 识别本地文件
result=  aipSpeech.asr(get_file_content('1.wav'), 'wav', 8000, {
    'lan': 'zh',
})
print (result["result"][0])