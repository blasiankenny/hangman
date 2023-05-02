class LogMixin:
  def show_attr(self):
    for key, value in self.__dict__.items():
      print(f'{key}: {value}')

class Person(LogMixin):
  def __init__(self, name, age):
    self.name = name
    self.age = age

if __name__ == '__main__':
  p = Person('鈴木修', 50)
  p.show_attr()