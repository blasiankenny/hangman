class Person:
  __slots__ = ['firstname', 'lastname', 'age']
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname

if __name__ == '__main__':
  p = Person('太郎', '山田')
  p.age = 18
  p.height = 178