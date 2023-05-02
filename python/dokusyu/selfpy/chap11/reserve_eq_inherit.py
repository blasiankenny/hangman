class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname
  def __eq__(self, other):
    if isinstance(other, Person):
      return self.firstname == other.firstname and \
             self.lastname == other.lastname
      # return self.__dict__ == other.__dict__
    return False
    
class BusinessPerson(Person):
  def __init__(self, firstname, lastname, title):
    super().__init__(firstname, lastname)
    self.title = title
  def __eq__(self, other):
    if isinstance(other, BusinessPerson):
      return super().__eq__(other) and \
             self.title == other.title
    return False

if __name__ == '__main__':
  p = Person('太郎', '山田')
  bp = BusinessPerson('太郎', '山田', '部長')
  print(p == bp)
  print(bp == p)