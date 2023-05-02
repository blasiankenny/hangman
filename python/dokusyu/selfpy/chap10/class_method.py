class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname
  
  def show(self):
    print(f'私の名前は{self.lastname}{self.firstname}です！')

if __name__ == '__main__':
  p = Person('太郎', '山田')
  p.show()