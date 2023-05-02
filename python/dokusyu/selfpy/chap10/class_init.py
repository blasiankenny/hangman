class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname

if __name__ == '__main__':
  p1 = Person('太郎', '山田')
  p2 = Person('花子', '鈴木')
  print(f'私の名前は{p1.lastname}{p1.firstname}です！')
  print(f'私の名前は{p2.lastname}{p2.firstname}です！')