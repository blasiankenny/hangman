import random

data = ['大吉', '中吉', '小吉']
print(random.choice(data))
print(random.sample(data, 2))
print(random.choices(data, k = 10))
print(random.choices(data, weights=[1, 10, 1], k = 10))