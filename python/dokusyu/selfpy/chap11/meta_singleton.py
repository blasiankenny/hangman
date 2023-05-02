class SingletonMeta(type):
  def __init__(cls, name, bases, disc, **kwargs):
    cls.__instance = None

  def __call__(cls, *args, **kwargs):
    if cls.__instance is None:
      cls.__instance = super().__call__(*args, **kwargs)
    return cls.__instance

class MySingleton(metaclass=SingletonMeta):
  pass

if __name__ == '__main__':
  c1 = MySingleton()
  c2 = MySingleton()
  print(c1 is c2)