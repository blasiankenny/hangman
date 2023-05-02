import collections

def get_max_min(*args):
  MaxMin = collections.namedtuple('MaxMin', ['max', 'min'])
  return MaxMin(max(args), min(args))

result = get_max_min(15, 7.5, 108, -10)
print(result.max)
print(result.min)
print(result[0])