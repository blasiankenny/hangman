set1={10,105,30,7}
set2={105,28,32,7}

print(set1.intersection(set2))


#check your understanding
d = {'cucmber':'キュウリ','lettuce':'レタス','spinach':'ほうれん草'}
d['cucmber']='胡瓜'
d.pop('spinach')
d.setdefault('carrot','ニンジン')

for item in d.items():
    print(item)


#1
if 'apple' in d:
    print(d)
else:
    print("-")

print(d.get('apple','-'))

#2
data =["a","b","x","c","x"]

data=[item for item in data if item!="x"]
print(data)

#3
data[0:3]=[]
print(data)
#4
t = ("いろは")


#5

for key, value in d.items():
    print(key+"="+value)