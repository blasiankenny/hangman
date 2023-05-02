sets1 = {1, 20, 30, 60, 10, 15}
sets2 = {10, 15, 30}
sets3 = {20, 40, 60}

print(sets1.union(sets2))
print(sets1.union(sets2, sets3))
print(sets1.intersection(sets2))
print(sets1.intersection(sets2, sets3))
print(sets1.difference(sets3))
print(sets1.difference(sets2, sets3))
print(sets1.symmetric_difference(sets3))