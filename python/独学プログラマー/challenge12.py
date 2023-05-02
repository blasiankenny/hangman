#!/usr/bin/env python3
import math
class Apple:
    def __init__(self,col,height,width,diameter):
        self.col=col
        self.height=height
        self.width=width
        self.diameter=diameter
        print("created!")

class Circle:
    def __init__(self) -> None:
        pass
    def area(self,radius):
        self.radius=radius
        return self.radius**2*math.pi
    
class Triangle:
    def __init__(self) -> None:
        pass
    def area(self,height,base):
        self.height=height
        self.base=base
        return self.base*self.height/2
class Hexagon:
    def __init__(self) -> None:
        pass
    def calcualte_perimeter(self,side):
        self.side=side
        return side*6

if __name__ == "__main__":
    a1 = Apple("red",2,3,8)
    a2 = Apple("yellow",2,4,9)
    c1 = Circle()
    print("Area of the circle is ",c1.area(3))
    t1 = Triangle()
    print("Area of the triangle is ",t1.area(3,5))
    h1 = Hexagon()
    print("Perimeter of the hexagon is ",h1.calcualte_perimeter(5))

