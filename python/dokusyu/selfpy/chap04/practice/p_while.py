i = 0
sum = 0

while i <= 100:
  i += 1
  if i % 2 != 0:
    continue
  sum += i

print('合計値は', sum, 'です。')