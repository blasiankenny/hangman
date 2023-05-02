import math

class Prime:
  def __init__(self, max):
    self.max = max
    self.__current = 1

  def __iter__(self):
    return self

  def __next__(self):
    while True:
      self.__current += 1
      if self.__current > self.max:
        raise StopIteration
      elif self.__is_prime(self.__current):
        return self.__current

  def __is_prime(self, value):
    result = True
    for i in range(2, math.floor(math.sqrt(value)) + 1):
      if value % i == 0:
        result = False
        break
    return result

if __name__ == '__main__':
  pr = Prime(100)
  for p in pr:
    print(p)