class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname

  def __eq__(self, other):
    if isinstance(other, Person):
      return self.firstname == other.firstname and \
             self.lastname == other.lastname
    return False

  def __hash__(self):
    return hash((self.firstname, self.lastname))

if __name__ == '__main__':
  p = Person('太郎', '山田')
  dic = {p: '男'}
  print(dic[p])

  # dic = {p: 100}
  # p.firstname = '次郎'
  # print(dic[p])