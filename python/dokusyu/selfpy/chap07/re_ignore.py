import re

msg = '仕事用はwings@example.comです。プライベート用はYAMA@example.comです。'
ptn = re.compile(r'[a-z0-9.!#$%&\'*+/=?^_{|}~-]+@[a-z0-9-]+(\.[a-z0-9-]+)*',
  re.IGNORECASE)
results = ptn.finditer(msg)
for result in results:
  print(result.group())