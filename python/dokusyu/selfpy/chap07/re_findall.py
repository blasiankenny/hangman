import re

msg = '電話番号は000-999-9999です。携帯は080-2222-3333です！'
ptn = re.compile(r'\d{2,4}-\d{2,4}-\d{4}')
results = ptn.findall(msg)
for result in results:
  print(result)

# results = ptn.finditer(msg)
# for result in results:
#   print(result.group())