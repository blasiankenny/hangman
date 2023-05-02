def walk_list(data, func):
  for key, value in enumerate(data):
    func(value, key)

data = [105, 53, 27, 87, 33]
walk_list(data,
  lambda value, key: print(key, ':', value))