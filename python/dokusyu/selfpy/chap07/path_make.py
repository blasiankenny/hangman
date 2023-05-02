import os

os.mkdir('selfpy/chap07/sub', 0o666)
input('Hit any key...')
os.rename('selfpy/chap07/sub', 'selfpy/chap07/copy')
input('Hit any key...')
os.rmdir('selfpy/chap07/copy')