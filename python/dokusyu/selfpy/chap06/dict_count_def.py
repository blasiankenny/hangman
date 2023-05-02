import collections

data = ['太郎', '花子', '次郎', '太郎', '太郎', '太郎', '花子']
result = collections.defaultdict(int)
# result = collections.defaultdict(lambda: int())
for key in data:
  result[key] += 1

print(result)