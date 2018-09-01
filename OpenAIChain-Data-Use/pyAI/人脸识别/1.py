from aip import AipFace
import base64

APP_ID = '10252502'
API_KEY = 'Ybsb43yXs8NLFXflQ0ySW7kE'
SECRET_KEY = '2WOEGA04PCwxommlcYk6O59XnSA344Ua'
client = AipFace(APP_ID, API_KEY, SECRET_KEY)

IMAGE_TYPE='BASE64'

f1 = open('face1.jpg','rb')
f2 = open('face2.jpg','rb')
#参数image：图像base64编码 分别base64编码后的2张图片数据
img1 = base64.b64encode(f1.read())
img2 = base64.b64encode(f2.read())
image_1 = str(img1,'utf-8')
image_2 = str(img2,'utf-8')
ptr = client.match([
    {
        'image': image_1,
        'image_type': 'BASE64',
    },
    {
        'image': image_2,
        'image_type': 'BASE64',
    }
])
ptr = ptr['result']
if ptr['score']<= 50:
    print('这俩人不像：哈哈哈',ptr['score'])
else:
    print('孪生兄弟啊',ptr['score'])