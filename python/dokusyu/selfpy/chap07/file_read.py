with open('./chap07/sample.txt', 'r', encoding='UTF-8') as file:
  data = file.read()
  # data = file.read(5)
print(data)