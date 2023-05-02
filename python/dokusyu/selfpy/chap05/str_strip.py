msg = ' 　こんにちは \t\n\r'
print('「' + msg.strip() + '」')
print('「' + msg.lstrip() + '」')
print('「' + msg.rstrip() + '」')

msg2 = '!======［独習Python］======!'
print('「' + msg2.strip('!=［］') + '」')