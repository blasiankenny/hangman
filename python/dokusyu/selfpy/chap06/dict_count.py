data = ['太郎', '花子', '次郎', '太郎', '太郎', '太郎', '花子']
result = {}

for key in data:
  # result[key] += 1

    if key in result:
      result[key] += 1
    else:
      result[key] = 1
print(result)