import math

class Coordinate:
  def __init__(self, x, y):
    self.x = x
    self.y = y

  def __bool__(self):
    print('__bool__')
    return self.x != 0 or self.y != 0

  def __len__(self):
    print('__len__')
    return int(math.sqrt(self.x ** 2 + self.y ** 2))

if __name__ == '__main__':
  c = Coordinate(0, 0)
  if c:
    print('cはTrueです。')
  else:
    print('cはFalseです。')