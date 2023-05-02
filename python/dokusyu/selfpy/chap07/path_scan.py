import datetime
import os

PATH = './chap07'
for f in os.scandir(PATH):
  print(f.path)
  print('フォルダー' if f.is_dir() else 'ファイル')
  st = f.stat()
  print(datetime.datetime.fromtimestamp(st.st_atime))
  print(st.st_size, 'byte')
  print('-----')