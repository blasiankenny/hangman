class Coordinate:
  def __init__(self, x, y):
    self.x = x
    self.y = y
  
  def __add__(self, other):
    if isinstance(other, Coordinate):
      return Coordinate(
              self.x + other.x,
              self.y + other.y
             )
    elif isinstance(other, int):
      return Coordinate(
              self.x + other,
              self.y
             )
    else:
      raise TypeError('type must be Coordinate or int')

  def __iadd__(self, other):
    self.x += other.x
    self.y += other.y
    return self

  def __str__(self):
    return f'({self.x}, {self.y})'

if __name__ == '__main__':
  c1 = Coordinate(10, 20)
  c2 = Coordinate(15, 25)
  c1 += c2
  print(c1)