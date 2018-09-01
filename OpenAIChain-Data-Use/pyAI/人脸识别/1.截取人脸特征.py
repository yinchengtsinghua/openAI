#coding:utf-8
from aip import AipFace
import json
import base64
""" 你的 APPID AK SK """
APP_ID = '10252502'
API_KEY = 'Ybsb43yXs8NLFXflQ0ySW7kE'
SECRET_KEY = '2WOEGA04PCwxommlcYk6O59XnSA344Ua'

aipFace = AipFace(APP_ID, API_KEY, SECRET_KEY)


# 读取图片
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()


# 调用人脸属性检测接口
'''
result = aipFace.detect(get_file_content('face.jpg'))
print result
'''
# 定义参数变量
options = {
    'max_face_num': 1,
    'face_fields': "age,beauty,expression,faceshape",
}

# 调用人脸属性识别接口
#result = aipFace.detect(get_file_content('face.jpg'),"jpg")
image =  base64.b64encode(get_file_content('face.jpg'))

imageType = "BASE64"

""" 调用人脸检测 """
result = aipFace .detect(image, imageType);

#result = aipFace.detect(get_file_content('face.jpg'),"BASE64")
print (result)