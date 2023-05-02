class Area:
  PI = 3.14

if __name__ == '__main__':
  a = Area()
  print(a.PI)
  a.PI = 3.1415926535
  print(a.PI)
  print(Area.PI)