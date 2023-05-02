sum = 0

for i in range(100, 201):
  if i % 2 == 0:
    continue
  sum += i
print('合計値は', sum, 'です。')