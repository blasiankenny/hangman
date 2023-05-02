d = {'apple': 'りんご', 'orange': 'みかん', 'melon': 'メロン'}

for item in d.items():
 print(item)	

for key, value in d.items():
  print(key, ':', value)	

for key in d.keys():
  print(key)

for value in d.values():
  print(value)

values = d.values()
d['apple'] = '林檎'

for value in values:
  print(value)