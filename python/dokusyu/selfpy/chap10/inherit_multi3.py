class Top:
  def hoge(self):
    print('Top')

class MiddleA(Top):
  def hoge(self):
    print('MiddleA')

class MiddleB:
  def hoge(self):
    print('MiddleB')

class Low(MiddleA, MiddleB):
  pass

if __name__ == '__main__':
  l = Low()
  l.hoge()
  print(Low.mro())