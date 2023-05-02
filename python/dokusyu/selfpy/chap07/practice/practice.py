import re
import random
import os
str = "住所は〒160-0000 新宿区南町0-0-0です。\nあなたの住所は〒210-9999川崎市北町1-1-1ですね"

ptn=re.compile(r'(〒\d{3}-\d{4})')

result = ptn.finditer(str)
for i in result:
    print(i.group())

print(abs(-12))
print(round(987.654,2))
for f in os.listdir("."):
    print(f)

print(random.randint(0,100))

ptn = re.compile(r"[/\\]")
txt="whatis/ going soa"
result = ptn.split(txt)
print(result)
