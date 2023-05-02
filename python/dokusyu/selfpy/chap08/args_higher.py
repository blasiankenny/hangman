def walk_list(data, func):
  for key, value in enumerate(data):
    func(value, key)

def show_item(value, key):
  print(key, ':', value)

data = [105, 53, 27, 87, 33]
walk_list(data, show_item)