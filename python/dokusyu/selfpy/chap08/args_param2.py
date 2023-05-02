def concatenate(prefix, suffix, *args):
  result = prefix
  result += '・'.join(args)
  return result + suffix

print(concatenate('[', ']', '鈴木', 'エルメシア', '富士子'))