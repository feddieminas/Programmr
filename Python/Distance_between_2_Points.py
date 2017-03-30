#
#  http://www.programmr.com/zone/python
#
#  Distance_between_2_Points.py
#  ProgrammrPy
#


x1=float(input("Enter the x1 co-ordinate:"))  
y1=float(input("Enter the y1 co-ordinate:")) 
x2=float(input("Enter the x2 co-ordinate:"))  
y2=float(input("Enter the y2 co-ordinate:"))     
   

class Point:
    
# write your logic here          
    def __init__(self,x,y):
        self.__x=x   #__ declares a private variable
        self.__y=y
        
    def distance_from_origin(self):
        return (self.__x**2+self.__y**2)**0.5
        
                 
              
p=Point(x2-x1,y2-y1)   
              
print(p.distance_from_origin()) 