import itertools

data1 = [ 'ぱんだ', 'うさぎ', 'こあら', 'とら' ] 
data2 = [ 'panda', 'rabbit', 'koala' ] 

for d1, d2 in itertools.zip_longest(data1, data2):
  print(d1, '=', d2)