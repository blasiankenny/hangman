flag = False
for i in range(1, 10):
  for j in range(1, 10):
    result = i * j
    if result > 50:
      flag = True
      break
    print(result, end=' ')
  print()
  if flag: 
    break