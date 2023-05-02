import datetime

dt = datetime.datetime(2019, 12, 4, 15, 35, 58, 469)
dt_p = dt + datetime.timedelta(days=15, hours=5)
dt_m = dt - datetime.timedelta(weeks=3)

print(dt)
print(dt_p)
print(dt_m)