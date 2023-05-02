import decimal

def hoge():
    pass


value="WHa"


print("No value" if value is None else value)

print(hoge() or 'default')


i=10
i-=2
print(i)
d=decimal.Decimal(0.5)
print(d)
li = [2,4,6,8,10]
x,y,*z=li
m=1
n=2
m,m=n,m
print(10<=(x:=3)<=50)