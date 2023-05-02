class MyClass:
  def __init__(self, kind, name):
    self.kind = kind
    self.name = name

  def show(self):
    return f'ペットの{self.kind}の名前は、{self.name}です。'

class MySubClass(MyClass):
  def show(self):
    return f'[{super().show()}]'

if __name__ == '__main__':
  ms = MySubClass('ハムスター', 'のどか')
  print(ms.show())