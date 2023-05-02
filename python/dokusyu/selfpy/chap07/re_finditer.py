import re

msg = '電話番号は000-999-9999です。携帯は080-2222-3333です！'
ptn = re.compile(r'(\d{2,4})-(\d{2,4})-(\d{4})')
results = ptn.finditer(msg)
for result in results:
  print(f'開始位置：{result.start()}')
  print(f'終了位置：{result.end()}')
  print(f'マッチング文字列：{result.group()}')
  print(f'市外局番：{result.group(1)}')
  print(f'市内局番：{result.group(2)}')
  print(f'加入者番号：{result.group(3)}')
  print(f'--------------')