import os

for path, dirs, files in os.walk('./chap07/doc'):
  print(path)
  print(dirs)
  print(files)
  print('-----------')