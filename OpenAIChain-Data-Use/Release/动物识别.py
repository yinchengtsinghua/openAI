import tkinter
from tkinter import filedialog
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
def openfiles2():
      s2fname = filedialog.askopenfilename(title='打开图像文件', filetypes=[('图片', '*.jpg'), ('All Files', '*')])
      print(s2fname)
      image = get_file_content(s2fname)
      result = aipImageClassify.animalDetect(image)
      print(result)
      print(result["result"][0]["name"])
      text.insert("insert",result["result"][0]["name"])


root = tkinter.Tk()
root.title('动物识别')
#root.geometry('500x300+500+200')
btn1 = tkinter.Button(root, text='打开图片',font =("宋体",20,'bold'),width=13,height=8, command=openfiles2)
text = tkinter.Text(root, width=30, height=2) #30的意思是30个平均字符的宽度，height设置为两行
text.pack()
btn1.pack()
root.mainloop()