import dataclasses

@dataclasses.dataclass()
class Person:
  firstname: str
  lastname: str

if __name__ == '__main__':
  p = Person('次郎', '山田')
  p2 = dataclasses.replace(p, firstname='太郎')
  print(p)
  print(p2)