class Person:
  __slots__ = ['__firstname', '__lastname']
  def __init__(self, firstname, lastname):
    self.__firstname = firstname
    self.__lastname = lastname

  @property
  def firstname(self):
    return self.__firstname

  @property
  def lastname(self):
    return self.__lastname

  def __delattr__(self, name):
    raise RuntimeError

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