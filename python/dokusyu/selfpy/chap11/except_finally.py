file = None
try:
  file = open('./chap11/sample.txt', 'r', encoding='UTF-8')
  data = file.read()
  print(data)
finally:
  if file:
    file.close()