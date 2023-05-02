class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname
  
  def show(self):
    print(f'私の名前は{self.lastname}{self.firstname}です！')

class Foreigner(Person):
  def __init__(self, firstname, middlename, lastname):
    super().__init__(firstname, lastname)
    self.middlename = middlename
  
  def show(self):
    print(f'私の名前は{self.lastname}.{self.middlename}.{self.firstname}です！')

if __name__ == '__main__':
  fr = Foreigner('太郎', 'ヨーダ', '山田')
  fr.show()