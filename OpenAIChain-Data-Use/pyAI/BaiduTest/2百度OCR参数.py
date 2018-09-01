#coding:utf-8

from aip import AipOcr

""" 你的 APPID AK SK """
APP_ID = '9588288'
API_KEY = 'lchwrQNmq2868qS6rNFXYtNG'
SECRET_KEY = 'EvlfpbVnUqWjq22EVpuR6Rjd56xV8sWg'

# 读取图片
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()
# 调用通用文字识别接口

# 定义参数变量
options = {
  'detect_direction': 'true',
  'language_type': 'CHN_ENG',
}


aipOcr = AipOcr(APP_ID, API_KEY, SECRET_KEY)
#result = aipOcr.basicGeneral(get_file_content(r"C:\Users\Tsinghua-yincheng\Desktop\SZday16\ocrdata\libaby.jpg"),
#options)

result = aipOcr.basicAccurate(get_file_content(r"C:\Users\Tsinghua-yincheng\Desktop\SZday16\ocrdata\libaby.jpg"),
options)

print (result)
