while True:
  try:
    num = input('数字を入力してください：')
    print('2倍すると...', float(num) * 2)
  except ValueError:
    print('入力値エラーです。')
  else:
    break