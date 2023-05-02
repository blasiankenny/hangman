import unicodedata

data = 'WINGSプロジェクト２０２０'
count = 0
for ch in data:
  if unicodedata.east_asian_width(ch) in 'FWA':
    count += 2
  else:
    count += 1
print(count)