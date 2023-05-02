class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname
  
  def show(self):
    print(f'私の名前は{self.lastname}{self.firstname}です！')

class BusinessPerson(Person):
  def work(self):
    print(f'{self.lastname}{self.firstname}は働いています。')

if __name__ == '__main__':
  bp = BusinessPerson('太郎', '山田')
  bp.show()
  bp.work()