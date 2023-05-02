d = {'apple': 'りんご', 'orange': 'みかん', 'melon': 'メロン'}
d['apple'] = '林檎'
d['strawberry'] = 'いちご'
print(d.setdefault('apple', '○'))
print(d.setdefault('watermelon', '○'))
print(d)