data = 'global'

def outer():
  data = 'outer'

  def inner():
    data = 'inner'
    return data
  
  return inner()

print(outer())