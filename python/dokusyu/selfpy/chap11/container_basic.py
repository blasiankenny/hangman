class Person:
  def __init__(self, firstname, lastname):
    self.firstname = firstname
    self.lastname = lastname
  
  def show(self):
    print(f'私の名前は{self.lastname}{self.firstname}です！')

class PersonList:
  def __init__(self):
    self.data = []

  def add(self, person):
    self.data.append(person)

  def __iter__(self):
    return iter(self.data)

  def __getitem__(self, key):
    return self.data[key]

  def __setitem__(self, key, value):
    self.data[key] = value

if __name__ == '__main__':
  pl = PersonList()
  pl.add(Person('太郎', '山田'))
  pl.add(Person('奈美', '掛谷'))
  pl.add(Person('悟助', '田中'))

  pl[1] = Person('哲也', '佐藤')
  print(pl[1].firstname)