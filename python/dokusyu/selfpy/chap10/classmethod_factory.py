import requests

class Book:
  def __init__(self, isbn, title, price):
    self.isbn = isbn
    self.title = title
    self.price = price

  @classmethod
  def get_by_isbn(cls, isbn):
    res = requests.get(f'https://wings.msn.to/tmp/{isbn}.json')
    bs = res.json()
    return cls(bs['isbn'], bs['title'], bs['price'])

if __name__ == '__main__':
  b = Book.get_by_isbn('978-4-7981-5112-0')
  print(b.title)