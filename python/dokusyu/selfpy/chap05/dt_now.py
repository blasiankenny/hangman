import datetime

print(datetime.datetime.today())
print(datetime.date.today())
print(datetime.datetime.now())
print(datetime.datetime.now(
  datetime.timezone(datetime.timedelta(hours=9))))
print(datetime.datetime.utcnow())
print(datetime.datetime.now(datetime.timezone.utc))