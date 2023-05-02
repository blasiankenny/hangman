rank = '甲'
msg = {
  '甲': '大変よいです。',
  '乙': 'よいです。',
  '丙': 'がんばりましょう。'
}

if rank in msg:
  print(msg[rank])
else:
  print('？？？')