import os

for path, dirs, files in os.walk('./chap07/doc'):
  for f in files:
    if f.endswith('.txt'):
      print(os.path.join(path, f))