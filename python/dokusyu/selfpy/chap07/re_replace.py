import re

msg = 'サポートサイトはhttps://www.wings.msn.to/ です。'
ptn = re.compile(r'http(s)?://([\w-]+\.)+[\w-]+(/[\w./?%&=-]*)?',
  re.IGNORECASE)
print(ptn.sub(r'<a href="\g<0>">\g<0></a>', msg))