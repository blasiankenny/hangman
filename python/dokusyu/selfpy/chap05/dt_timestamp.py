import datetime

dt = datetime.datetime.now(datetime.timezone.utc)
ts = dt.timestamp()

print(datetime.datetime.fromtimestamp(ts))
print(datetime.datetime.fromtimestamp(ts, datetime.timezone.utc))
print(datetime.date.fromtimestamp(ts))