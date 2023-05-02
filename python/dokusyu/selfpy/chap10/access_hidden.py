class Person:
  def __init__(self, name, age):
    self.__name = name
    self.__age = age

  def show(self):
    print(f'私の名前は{self.__name}、{self.__age}歳です！')

if __name__ == '__main__':
  p = Person('山田太郎', 15)
  #print(p.__age)  
  print(p._Person__age)

  p.__age = 38
  p.show()