import os
import csv

print(os.path.join("Users","Kenny","uvic","CSC"))

st = open("st.txt","w")
st.write("Hi from Python!... again")
st.close()

with open("st2.txt","w") as f:
    f.write("Hi from Python, AGAIN!")

with open("st.txt","r") as f:
    print(f.read())

with open("st.csv","w",newline="") as f:
    w = csv.writer(f, delimiter=",")
    w.writerow(["one","two","three"])
    w.writerow(["four","five","six"])