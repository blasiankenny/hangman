class MyStack:
  def __init__(self):
    self.__data = []

  def push(self, elem):
    self.__data.append(elem)

  def pop(self):
    return self.__data.pop()

if __name__ == '__main__':
  s = MyStack()
  s.push(40)
  print(s.pop())