def read_files(*files):
  for file in files:
    yield from read_lines(file)

def read_lines(path):
  with open(path, 'r', encoding='UTF-8') as file:
    for line in file:
      yield line.rstrip('\n')

for line in read_files(
  'selfpy/chap09/sample1.dat', 'selfpy/chap09/sample2.dat', 'selfpy/chap09/sample3.dat'):
  print(line)