def create_dict(**kwargs):
  result = dict()
  for key, value in kwargs.items():
    result[key] = value
  return result

d = create_dict(name='山田太郎', age=18, sex='male')
print(d)