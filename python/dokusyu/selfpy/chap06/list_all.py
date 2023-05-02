print(all([False, True, False]))
print(any([False, True, False]))
print(not any([False, False, False]))

print(any(['あいう', '', '']))
print(any(['', '', '']))

print(all((True, True, False)))

data = ['さざんか', 'ほうせんか', 'バラ', 'サクラ']
print(any([len(str) > 4 for str in data]))