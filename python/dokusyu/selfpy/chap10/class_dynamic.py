class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname

if __name__ == '__main__':
  p1 = Person('太郎', '山田')
  p1.age = 52
  p2 = Person('花子', '鈴木')
  print(p1.age)
  print(p2.age)