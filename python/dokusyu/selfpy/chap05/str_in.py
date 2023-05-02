msg = 'WINGSプロジェクト'

print('プロ' in msg)
print('プロ' not in msg)
print(msg.startswith('WINGS'))
print(msg.endswith('WINGS'))
print(not msg.startswith('WINGS'))
print(msg.startswith('WINGS', 1))
print('プロ' in msg[6:])
print('wings' in msg)
print('wings' in msg.casefold())