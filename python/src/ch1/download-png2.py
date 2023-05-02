import urllib.request 

# URLと保存パスを指定
url = "https://images.daznservices.com/di/library/sporting_news/39/20/donovan-mitchell-getty-031220-ftrjpg_1kpyb7rq3r4y51gr9v08jv6lmy.jpg?t=-763193888&quality=100"
savename = "test2.png"

# ダウンロード --- (※1)
mem = urllib.request.urlopen(url).read()

# ファイルへ保存 --- (※2)
with open(savename, mode="wb") as f:
    f.write(mem)
    print("保存しました")

