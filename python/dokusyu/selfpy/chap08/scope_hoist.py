num = 3

def check_scope():
  print(num)
  num = 108
  return num
  
print(check_scope())