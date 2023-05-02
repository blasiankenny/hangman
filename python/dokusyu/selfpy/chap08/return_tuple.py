def get_max_min(*args):
  return (max(args), min(args))
  # return max(args), min(args)
  # return [max(args), min(args)]

max_v, min_v = get_max_min(15, 7.5, 108, -10)
print(max_v)
print(min_v)