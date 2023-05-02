import random

gen = (random.random() for i in range(100))
# def my_gen():
#   for i in range(100):
#     yield random.random()
# gen = my_gen()

for num in gen:
  print(num)