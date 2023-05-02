def my_gen():
  yield 'あいうえお'
  yield 'かきくけこ'
  yield 'さしすせそ'

for value in my_gen():
# gen = my_gen()
# for value in gen:
  print(value)

# print(my_gen())