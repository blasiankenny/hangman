d = {'cucumber':'キュウリ', 'lettuce':'レタス', 'spinach':'ホウレンソウ'}
d['cucumber'] = '胡瓜'
d.pop('spinach')
d.setdefault('carrot', 'ニンジン')
# d['carrot'] = 'ニンジン'

for item in d.items():
  print(item)