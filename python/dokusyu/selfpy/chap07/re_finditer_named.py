import re

msg = '電話番号は000-999-9999です。携帯は080-2222-3333です！'
ptn = re.compile(r'(?P<area>\d{2,4})-(?P<city>\d{2,4})-(?P<local>\d{4})')
results = ptn.finditer(msg)
for result in results:
  print(f'開始位置：{result.start()}')
  print(f'終了位置：{result.end()}')
  print(f'マッチング文字列：{result.group()}')
  print(f'市外局番：{result.group("area")}')
  print(f'市内局番：{result.group("city")}')
  print(f'加入者番号：{result.group("local")}')
  print(f'--------------')