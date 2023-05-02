import re

msg = 'にわに3わうらにわに51わにわとりがいる'
ptn = re.compile(r'\d{1,}わ')
result = ptn.split(msg)
print(result)