def init(self, firstname, lastname):
  self.firstname = firstname
  self.lastname = lastname

def show(self):
  print(f'私の名前は{self.lastname}{self.firstname}です！')

Person = type(
  'Person',
  (object, ),
  {
    '__init__': init,
    'show': show
    # 'show': (lambda self: print(f'私の名前は{self.lastname}{self.firstname}です！'))
  }
)

if __name__ == '__main__':
  p = Person('太郎', '山田')
  p.show()
  print(type(Person))
  print(isinstance(Person, type))