data = [
  'フレンチブルドッグ',
  'ヨークシャーテリア',
  'ダックスフント',
  'ポメラニアン',
  'コーギー',
]

result = filter(lambda v: len(v) < 8, data)
# result = [x for x in data if len(x) < 8]
print(list(result))