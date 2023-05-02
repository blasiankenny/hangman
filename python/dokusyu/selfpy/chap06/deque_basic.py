import collections

data = collections.deque()
data.append(10)
data.append(15)
data.append(30)
print(data)
print(data.popleft())
print(data)

data2 = collections.deque()
data2.append(10)
data2.append(15)
data2.append(30)
print(data2)
print(data2.pop())
print(data2)