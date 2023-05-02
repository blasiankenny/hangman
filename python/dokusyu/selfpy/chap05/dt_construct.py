import datetime

print(datetime.datetime(2019, 12, 4, 15, 35, 58, 469))
print(datetime.datetime(2019, 12, 4, 15, 35, 58, 469,
  datetime.timezone(datetime.timedelta(hours=9))))
print(datetime.date(2019, 12, 4))
print(datetime.time(15, 35, 58, 469))
print(datetime.time(15, 35, 58, 469,
  datetime.timezone(datetime.timedelta(hours=9))))
print(datetime.datetime(2019, 13, 4, 15, 35, 58, 469))