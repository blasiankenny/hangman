class MyInfo:
  def __init__(self):
    super().__setattr__('__data', {})
  
  def __getattr__(self, name):
    try:
      return super().__getattribute__('__data')[name]
    except KeyError as ex:
      return None

  def __setattr__(self, name, value):
    super().__getattribute__('__data')[name] = value

if __name__ == '__main__':
  i = MyInfo()
  i.score = 58
  i.hobby = '卓球'
  print(i.hobby)
  print(i.__dict__)