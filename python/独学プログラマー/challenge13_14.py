#!/usr/bin/env python3
class Shape:
    def __init__(self) -> None:
        pass
    def what_am_i(self):
        return "I am a shape"
class Rectangle(Shape):
    def __init__(self,width,length):
        self.width=width
        self.length=length
    def calculate_perimeter(self):
        return self.width*2+self.length*2
    def change_size(self,w,l):
        self.width+=w
        self.length+=l
class Squere(Shape):
    squere_list=[]
    def __init__(self,side):
        self.side=side
        self.squere_list.append(self)
    def calculate_perimeter(self):
        return self.side*4
    def __repr__(self):
        return "{} by {} by {} by {}".format(self.side,self.side,self.side,self.side)
class Horse:
    def __init__(self,rider):
        self.rider=rider
class Rider:
    def __init__(self,name):
        self.name = name
def compare(f,s):
    return f is s
if __name__ == "__main__":
    r1 = Rectangle(2,4)
    print(r1.calculate_perimeter())
    s1 = Squere(7)
    s2 = Squere(3)
    s3 = Squere(30)
    s4 = Squere(12)
    #print(Squere.squere_list)
    print(s1)
    print(s2)
    print(s3)
    print(s4)
    print(s1.calculate_perimeter())
    print(r1.what_am_i())
    print(s1.what_am_i())
    r1 = Rider("Kenny")
    h1 = Horse(r1)
    print(h1.rider.name)
    print(compare(s1,s2))
    
    print(compare(s3,s3))