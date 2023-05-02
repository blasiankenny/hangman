d1 = {'apple': 'りんご', 'orange': 'みかん'}
d2 = {'melon': 'メロン', 'orange': '蜜柑'}
d1.update(d2)
print(d1)
d1.update(strawberry='いちご', watermelon='すいか')
print(d1)
d1.update([('pear', 'なし'), ('grape', 'ぶどう')])
print(d1)