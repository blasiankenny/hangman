import re

def show_match(ptn, input):
  results = ptn.finditer(input)
  for result in results:
    print(result.group())
  print('------------------------------')

re1 = re.compile('いろ(?=はに)')
re2 = re.compile('いろ(?!はに)')
re3 = re.compile('(?<=。)いろ')
re4 = re.compile('(?<!。)いろ')
msg1 = 'いろはにほへと'
msg2 = 'いろものですね。いろいろと'

show_match(re1, msg1)	
show_match(re1, msg2)
show_match(re2, msg1)
show_match(re2, msg2)
show_match(re3, msg1)
show_match(re3, msg2)
show_match(re4, msg1)
show_match(re4, msg2)