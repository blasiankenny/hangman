import re

msg = '10人のインディアン。\n1年生になったら'
# ptn = re.compile(r'^\d*')
ptn = re.compile(r'^\d*', re.MULTILINE)
results = ptn.findall(msg)
for result in results:
  print(result)