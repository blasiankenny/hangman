import datetime

dt = datetime.datetime.now(datetime.timezone.utc)
print(dt)
print(dt.date())
print(dt.time())
print(dt.timetz())
print(dt.timestamp())
print(dt.toordinal())
print(dt.weekday())
print(dt.isoweekday())
print(dt.isocalendar())