import math

class Coordinate:
  def __init__(self, x, y):
    self.x = x
    self.y = y

  def __int__(self):
    return int(self.__float__())

  def __float__(self):
    return math.sqrt(self.x ** 2 + self.y ** 2)

if __name__ == '__main__':
  c = Coordinate(1, 2)
  print(float(c))
  print(int(c))