#coding:utf-8
from aip import AipNlp

""" 你的 APPID AK SK """
APP_ID = '10254187'
API_KEY = 'npNXA6UxGInqXGbKPk4TVfaW'
SECRET_KEY = 'r0mHeKH7TWVpPa0weKMVMpQ2whosIPGM '

aipNlp = AipNlp(APP_ID, API_KEY, SECRET_KEY)
result = aipNlp.lexer('黄健是一个帅锅') #词法分析接口包含了中文分词和词性标注的功能
for  key  in result:
    print (key,result[key])

result = aipNlp.wordEmbedding("黄健") #用于词汇数学计算，词向量
print (result)

result =  aipNlp.wordSimEmbedding('早饭', '早点') #词语相似度
print (result)
result =  aipNlp.wordSimEmbedding('帅', '英俊')#词语相似度
print (result)
result =  aipNlp.wordSimEmbedding('强大', '厉害')#词语相似度
print (result)

result =aipNlp.sentimentClassify('这家公司差的很')#情感分析
print (result)

result = aipNlp.dnnlm('百度是个搜索公司')#语法结构分析
print (result)

result = aipNlp.simnet('清华学霸', '清华学渣') #词频相似度
print (result)

result = aipNlp.commentTag('面包很好吃，吃的我拉肚子了') #评论观点提取，判断情感属性
print (result)

result=aipNlp.depParser('百度是一家伟大的公司')
print (result)