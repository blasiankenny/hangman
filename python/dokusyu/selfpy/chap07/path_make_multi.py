import os

os.makedirs('./chap07/sub/gsub')
input('Hit any key...')
os.renames('./chap07/sub/gsub', './chap07/copy/gchild')
input('Hit any key...')
os.removedirs('./chap07/copy/gchild')