# ライブラリの取り込み --- (※1)
import urllib.request

# URLと保存パスを指定
url = "https://th.bing.com/th/id/OIP.xittnB74YMCyV8ZdDnOK4QHaDt?pid=ImgDet&rs=1"
savename = "test1.png"

# ダウンロード --- (※2)
urllib.request.urlretrieve(url, savename)
print("保存しました")

