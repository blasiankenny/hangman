sets = {'鈴木',  '佐藤', '田中', '山本'}
sets.add('伊藤')
sets.add('田中')
print(sets)

sets.remove('山本')

for item in sets:
  print(item)

print(sets.pop())
print(sets)
sets.clear()
print(sets)