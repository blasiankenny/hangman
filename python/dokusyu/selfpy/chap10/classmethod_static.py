class Area:
  @staticmethod
  def circle(radius):
    return radius * radius * 3.14

if __name__ == '__main__':
  print(Area.circle(10))