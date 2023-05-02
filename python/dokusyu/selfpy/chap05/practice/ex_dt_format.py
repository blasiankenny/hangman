import datetime
import locale

locale.setlocale(locale.LC_ALL, 'ja_JP.UTF-8')
dt = datetime.datetime(2020, 12, 4, 11, 37, 20, 0,
  datetime.timezone(datetime.timedelta(hours=9)))
print(dt.strftime('%Y年%m月%d日%I時'))