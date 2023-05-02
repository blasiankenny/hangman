import re

ptn = re.compile(r'\d{2,4}-\d{2,4}-\d{4}')
with open('selfpy/chap07/sample.dat', 'r', encoding='UTF-8') as file:
  for line in file:
    results = ptn.finditer(line)
    for result in results:
      print((result.group()))