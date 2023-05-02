import practice_関数

tv=["Friends","This Girl","This is Us","AOT"]
for value in tv:
    print(value)
for i, new in enumerate(tv):
    print("i = ",i)
    new = tv[i]
    new = new.upper()
    tv[i] = new 
print(tv)

