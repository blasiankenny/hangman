import dataclasses

@dataclasses.dataclass()
class Person:
  firstname: str
  lastname: str

if __name__ == '__main__':
  for f in dataclasses.fields(Person):
    print(f)