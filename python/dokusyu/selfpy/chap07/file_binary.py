with open('selfpy/chap07/input.png', 'rb') as reader, \
     open('selfpy/chap07/output.png', 'wb') as writer:
  while True:
    d = reader.read(1)
    if len(d) == 0:
      break
  
  # 以下はPython 3.8以降でのみ動作（3.7以前の環境では実行できません）
  # while d := reader.read(1):
    writer.write(d)