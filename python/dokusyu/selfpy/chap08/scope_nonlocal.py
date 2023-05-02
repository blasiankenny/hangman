data = 'global'

def outer():
  data = 'outer'

  def inner():
    # global data
    nonlocal data
    data = 'inner'
    return data

  print(inner())
  print(data)

outer()
print(data)