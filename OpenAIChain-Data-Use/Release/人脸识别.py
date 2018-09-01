from aip import AipFace
import base64
import tkinter
from tkinter import filedialog


APP_ID = '10252502'
API_KEY = 'Ybsb43yXs8NLFXflQ0ySW7kE'
SECRET_KEY = '2WOEGA04PCwxommlcYk6O59XnSA344Ua'
client = AipFace(APP_ID, API_KEY, SECRET_KEY)

IMAGE_TYPE='BASE64'

image_1=""
image_2=""


""" 读取图片 """
def get_file_content(filePath):
    with open(filePath, 'rb') as fp:
        return fp.read()

def openfiles2():
      global image_1
      s2fname = filedialog.askopenfilename(title='打开图像文件', filetypes=[('图片', '*.jpg'), ('All Files', '*')])
      print(s2fname)
      f1 = open(s2fname, 'rb')
      img1 = base64.b64encode(f1.read())
      image_1 = str(img1, 'utf-8')

def openfiles1():
    global image_2
    s2fname = filedialog.askopenfilename(title='打开图像文件', filetypes=[('图片', '*.jpg'), ('All Files', '*')])
    print(s2fname)
    f2 = open(s2fname, 'rb')
    img2 = base64.b64encode(f2.read())
    image_2 = str(img2, 'utf-8')

def re2():
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
    if ptr['score'] <= 50:
        print('这俩人不像：哈哈哈', ptr['score'])
        text.insert("insert", '这俩人不像：哈哈哈'+str(ptr['score']))
    else:
        print('孪生兄弟啊', ptr['score'])
        text.insert("insert", '孪生兄弟啊'+str(ptr['score']))

root = tkinter.Tk()
root.title('人脸识别')
#root.geometry('500x300+500+200')
btn1 = tkinter.Button(root, text='打开图片1',font =("宋体",20,'bold'),width=13,height=8, command=openfiles1)
btn2 = tkinter.Button(root, text='打开图片2',font =("宋体",20,'bold'),width=13,height=8, command=openfiles2)
btn3 = tkinter.Button(root, text='识别',font =("宋体",20,'bold'),width=13,height=8, command=re2)
text = tkinter.Text(root, width=30, height=2) #30的意思是30个平均字符的宽度，height设置为两行
text.pack()
btn1.pack()
btn2.pack()
btn3.pack()
root.mainloop()
