class Left:
  def __init__(self, value):
    self.value = value
  
  def __sub__(self, other):
    print('Left#__sub__')
    return Left(self.value - other.value)

class Right:
# class Right(Left):
  def __init__(self, value):
    self.value = value

  def __rsub__(self, other):
    print('Right#__rsub__')
    return Left(other.value - self.value)

if __name__ == '__main__':
  l = Left(10)
  r = Right(5)
  result = l - r
  print(result.value)