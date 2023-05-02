class LogProp:
  def __init__(self, name):
    self.name = name

  def __get__(self, obj, t):
    print(f'{self.name}: get')
    return obj.__dict__[self.name]
  
  def __set__(self, obj, value):
    print(f'{self.name}: set {value}')
    obj.__dict__[self.name] = value

class App:
  title = LogProp('title')

if __name__ == '__main__':
  app = App()
  app.title = '独習Python'
  print(app.title)