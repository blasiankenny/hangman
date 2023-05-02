import bisect

data = [108, 12, 9, 57, 63, 30]
data.sort()
print(data)
bisect.insort(data, 43)
print(data)