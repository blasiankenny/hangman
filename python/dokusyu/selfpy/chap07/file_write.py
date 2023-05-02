import datetime
import sys

file = open('selfpy/chap07/access.log', 'a', encoding='UTF-8')
file.write(f'{datetime.datetime.now()}\n')
file.close()
print('現在時刻をファイルに保存しました。')
print(sys.getfilesystemencoding())