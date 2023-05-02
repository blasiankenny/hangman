d = {'apple': 'りんご', 'orange': 'みかん', 'melon': 'メロン'}
# print(d['pear'])
print(d.get('pear', '×'))
print(d.pop('melon', '×'))
print(d.popitem())
print(d)