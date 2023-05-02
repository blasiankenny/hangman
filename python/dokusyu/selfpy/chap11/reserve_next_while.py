data = [1, 2, 3]
itr = iter(data)
while True:
  try:
    print(next(itr))
  except StopIteration:
    break