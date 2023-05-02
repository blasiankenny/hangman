class Pet:
  def __init__(self, kind, name):
    self.kind = kind
    self.name = name

  def show(self):
    print(f'ペットの{self.kind}の名前は、{self.name}ちゃんです！')

if __name__ == '__main__':
  p = Pet('ハムスター', 'のどか')
  p.show()    