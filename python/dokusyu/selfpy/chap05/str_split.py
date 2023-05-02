msg1 = 'ねこ いぬ たぬき'
msg2 = 'さくら|もも|うめ|ききょう'

print(msg1.split())
print(msg2.split('|'))
print(msg2.rsplit('|'))
print(msg2.split('|', 2))
print(msg2.rsplit('|', 2))