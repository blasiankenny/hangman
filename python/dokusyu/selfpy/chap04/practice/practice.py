value = 75

if value>=90:
    print("very good")
elif value>=70:
    print("good")
elif value>=50:
    print("okay")
else:
    print("Failed")


for i in range(1,10):
    for j in range(1,10):
        print(i*j, end=' ')
    print()


#4.3
i =1
s=0
while i < 101:
    if i % 2 !=0:
        i+=1
        continue
    s+=i
    i+=1
print(s)

#check your understanding

data=[1,2,3,4,5,]

for j in data:
    print(j)
for j in range(1,101):
    print(j)
data2=[j*10 for j in data]




print(result:=sum([j for j in data2 if j>=0]))

num=20
print(num if 10<=num<=50 else "Invalid")


print(sum([i for i in range(100,201) if i%2!=0]))