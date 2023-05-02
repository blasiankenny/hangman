class Coordinate:
  def __init__(self, x, y):
    self.x = x
    self.y = y

  def __lt__(self, other):
    return self.x ** 2 + self.y ** 2 \
            < other.x ** 2 + other.y ** 2
  
  def __le__(self, other):
    return self.x ** 2 + self.y ** 2 \
            <= other.x ** 2 + other.y ** 2

  def __gt__(self, other):
    return not self.__le__(other)

  def __ge__(self, other):
    return not self.__lt__(other)

  def __str__(self):
    return f'({self.x}, {self.y})'

if __name__ == '__main__':
  c1 = Coordinate(1, 2)
  c2 = Coordinate(15, 25)
  c3 = Coordinate(2, 1)
  print(c1 < c2)
  print(c1 <= c3)
  print(c1 <= c2)
  print(c1 > c2)