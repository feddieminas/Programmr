#
#  http://www.programmr.com/zone/python
#
#  Distance_From_Origin.py
#  ProgrammrPy
#


import math

x=float(input("Enter the x co-ordinate:"))
y=float(input("Enter the y co-ordinate:"))  
 

class Point: 
# write your logic here 
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y
        
    def __str__(self):
        return "({0}, {1})".format(self.x, self.y)

    def __sub__(self,other):
        """Point(x1-x2,y1-y2)"""
        return Point(self.x - other.x, self.y - other.y)
        
    def distance_from_origin(self):
        return math.sqrt(self.x**2+self.y**2)
        
p=Point(x,y)

#p2=Point(1,1) 
#pdelta=p-p2       #calls sub function
#print (pdelta)     #calls str function
            
print(p.distance_from_origin())  
 