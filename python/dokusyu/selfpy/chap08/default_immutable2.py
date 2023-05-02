def my_func(value, list=None):
  if list is None:
    list = []
  list.append(value)
  return list

print(my_func(13))
print(my_func(108))  