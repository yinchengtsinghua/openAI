#coding:utf-8
from aip import AipFace

""" 你的 APPID AK SK """
APP_ID = '10252502'
API_KEY = 'Ybsb43yXs8NLFXflQ0ySW7kE'
SECRET_KEY = '2WOEGA04PCwxommlcYk6O59XnSA344Ua'

aipFace = AipFace(APP_ID, API_KEY, SECRET_KEY)
# 读取图片
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()

result = aipFace.match([
        get_file_content('huangjian.jpg'),
        get_file_content('face1.jpg'),
        get_file_content('face2.jpg'),
        get_file_content('face3.jpg'),
    ])
print (result)