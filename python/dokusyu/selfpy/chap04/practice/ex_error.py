while True:
  try:
    num = input('数字を入力してください：')
    print('1.5倍すると...', float(num) * 1.5)
  except ValueError:
    print('入力値エラーです')
  else:
    break