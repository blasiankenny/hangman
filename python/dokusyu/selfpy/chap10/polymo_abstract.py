class Figure():
  def __init__(self, width, height):
    self.width = width
    self.height = height

  def get_area(self):
    return 0.0

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