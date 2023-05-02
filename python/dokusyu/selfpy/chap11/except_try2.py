def hoge():
  try:
    return 'Hoge'
  finally:
    print('**Finally**')	
    # return 'Hoge Finally'

print('Start')
print(hoge())
print('End')