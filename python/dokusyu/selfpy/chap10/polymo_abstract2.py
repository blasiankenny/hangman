from abc import abstractmethod, ABC

class Figure(ABC):
  def __init__(self, width, height):
    self.width = width
    self.height = height
  @abstractmethod
  def get_area(self):
    pass

class Triangle(Figure):
  def get_area(self):
    return self.width * self.height / 2

class Rectangle(Figure):
  def get_area(self):
    return self.width * self.height

if __name__ == '__main__':
  t = Triangle(10, 15)
  r = Rectangle(10, 15)
  print(t.get_area())
  print(r.get_area())