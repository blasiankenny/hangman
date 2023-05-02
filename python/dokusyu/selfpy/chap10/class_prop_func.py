class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

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
    print(f'私の名前は{self.name}、{self.age}歳です！')

  name = property(get_name, set_name)
  # name = property(get_name)
  age = property(get_age, set_age)

if __name__ == '__main__':  
  p = Person('山田太郎', 15)
  p.name = '鈴木次郎'
  p.age = 35
  print(p.name)
  print(p.age)  