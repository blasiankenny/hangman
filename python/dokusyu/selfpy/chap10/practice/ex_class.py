class Hamster:
  def __init__(self, name):
    self.__name = name

  @property
  def name(self):
    return self.__name

  def show(self, fmt):
    print(fmt.format(self.__name))

if __name__ == '__main__':
  h = Hamster('のどか')
  h.show('私の名前は{0}です！')