import random

data = ['大吉', '中吉', '小吉']
random.shuffle(data)
print(data)
new_data = random.sample(data, len(data))
print(data)
print(new_data)