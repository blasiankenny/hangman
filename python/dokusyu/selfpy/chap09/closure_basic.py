def counter(init):
  count = init
  def increment():
    nonlocal count
    count += 1
    return count
  return increment

c1 = counter(1)
c2 = counter(25)
print(c1())
print(c1())
print(c2())
print(c2())