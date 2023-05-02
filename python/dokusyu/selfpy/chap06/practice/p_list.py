data1 = [10, 15, 30]
data2 = [60, 90]
data1.pop(0)
data1.append(50)
data1.insert(1, 20)
data3 = data1 + data2
for index, value in enumerate(data3):
  print(index, ':', value)