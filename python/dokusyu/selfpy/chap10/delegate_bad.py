class MyStack(list):
  def push(self, elem):
    self.append(elem)

  def insert(self):
    raise RuntimeError('Not Support')

if __name__ == '__main__':
  s = MyStack([10, 20, 30])
  s.push(40)
  print(s.pop())
  print(s)

  # mylist = MyStack([10, 20, 30])
  # mylist.insert(1, 50)