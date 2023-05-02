def walk_list(data, func):
  for key, value in enumerate(data):
    func(value, key)

result = 0
def calcu_sum(value, key):
  global result
  result += value

data = [105, 53, 27, 87, 33]
walk_list(data, calcu_sum)
print(result)