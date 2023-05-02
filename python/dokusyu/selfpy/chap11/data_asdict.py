import dataclasses

@dataclasses.dataclass()
class Person:
  firstname: str
  lastname: str

if __name__ == '__main__':
  p = Person('次郎', '山田')
  print(dataclasses.asdict(p))
  print(dataclasses.astuple(p))