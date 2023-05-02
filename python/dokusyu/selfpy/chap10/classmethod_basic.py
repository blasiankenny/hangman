class Area:
  @classmethod
  def circle(cls, radius):
    return radius * radius * 3.14

if __name__ == '__main__':
  print(Area.circle(10))
  a = Area()
  print(a.circle(10))