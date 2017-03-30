#
#  http://www.programmr.com/zone/python
#
#  Right_Angled_Triangle.py
#  ProgrammrPy
#


a=int(input("Enter the first side:"))  #3
b=int(input("Enter the second side:")) #4
c=int(input("Enter the third side:"))  #5
  
#write your logic here 
import math
  
height=a
width=b

try:
    # check the Third Side
    assert (c == math.sqrt((width * width) + (height * height)))

except AssertionError:
    print("Right Angled Triangle not possible")
else:
    print("Right Angled Triangle")