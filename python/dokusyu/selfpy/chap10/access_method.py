class Person:
  def __init__(self, name, age):
    self.set__name = name
    self.__age__ = age

  def get_name(self):
    return self.__name

  def get_age(self):
    return self.__age

  def set_name(self, value):
    self.__name = value

  def set_age(self, value):
    if value <= 0:
      raise ValueError('ageは正数で指定します。')
    self.__age = value

  def show(self):
    print(f'私の名前は{self.get_name()}、{self.get_age()}歳です！')

if __name__ == '__main__':
  p = Person('山田太郎', 15)
  p.set_age(35)
  print(p.get_age())
  p.set_age(-15)