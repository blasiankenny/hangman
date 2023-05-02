data = 'こんにちは'
encoded = data.encode('sjis')
print(encoded)
print(encoded.decode('sjis'))
print(encoded.decode('euc-jp', 'replace'))