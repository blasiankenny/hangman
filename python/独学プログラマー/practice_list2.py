my_dict={"Apple":"not bad","Orange":"pretty good","Mango":"Excellent!!"}

value=(input("Type your fav fruit "))

try:
    print(my_dict[value])
except(Exception):
    print("You have no sense")

