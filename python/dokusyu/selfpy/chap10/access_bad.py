class Person:
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def show(self):
    print(f'私の名前は{self.name}、{self.age}歳です！')

if __name__ == '__main__':
  p = Person('鈴木次郎', 38)
  p.show()