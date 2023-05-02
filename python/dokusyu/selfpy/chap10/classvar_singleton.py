class MySingleton:
  __instance = None

  def __new__(cls):
    if cls.__instance is None:
      cls.__instance = super().__new__(cls)
    return cls.__instance

if __name__ == '__main__':
  c1 = MySingleton()
  c2 = MySingleton()
  print(c1 is c2)