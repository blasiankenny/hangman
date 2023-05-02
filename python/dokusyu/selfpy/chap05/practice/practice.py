import datetime

str = "プログラミング言語"
print(str[4:7])

str2 = "鈴木\t太郎\t男\t50歳\t広島県"
print(str2.replace("\t","&"))

dt = datetime.datetime.now()
print(dt.month)
print(dt.minute)