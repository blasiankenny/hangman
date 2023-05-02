def get_value(map, key):
  if key in map:
    return map[key]
  else:
    return None

map = { 'apple': 'りんご', 'orange': 'みかん', 'melon': 'メロン'}
print(get_value(map, 'apple'))
print(get_value(map, 'grape'))