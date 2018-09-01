#coding:utf-8
from aip import AipImageClassify

""" 你的 APPID AK SK """
APP_ID = '10254191'
API_KEY = 'eHP1Ku9GhxgvhElbXNEkufhU'
SECRET_KEY = 'pe0BHWBhEiPB5cBwgARmdaPS4EWN02N5'

aipImageClassify = AipImageClassify(APP_ID, API_KEY, SECRET_KEY)


""" 读取图片 """
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()
image = get_file_content('3.jpg')


""" 如果有可选参数 """
options = {}
options["top_num"] = 3

""" 带参数调用菜品识别 """
aipImageClassify.dishDetect(image, options)

""" 调用菜品识别 """
result=aipImageClassify.dishDetect(image,options)
print (result)
print  (result["result"][0]["name"])

