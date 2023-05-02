with open('selfpy/chap07/sample.txt', 'r', encoding='UTF-8') as file:
  data = file.readlines()

for line in data:
  #print(line, end='')
  print(line.rstrip('\n'))