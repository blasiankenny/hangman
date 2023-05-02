def concatenate(*args):
  args = list(args)
  prefix = args.pop(0)
  suffix = args.pop(0)
  return prefix + '・'.join(args) + suffix

print(concatenate('[', ']', '鈴木', 'エルメシア', '富士子'))