#
#  http://www.programmr.com/zone/python
#
#  Determinant_of_a_2*2_matrix.py
#  ProgrammrPy
#


import sys

if (sys.version_info[0]>=3): raw_input=input
    
a1 = int(raw_input("Enter the first number for tuple 1: ") )
a2 = int(raw_input("Enter the second number for tuple 1: ")) 
b1 = int(raw_input("Enter the first number for tuple 2: ")) 
b2 = int(raw_input("Enter the second number for tuple 2: "))  
    
M = ((a1,a2),(b1,b2)) 
  
# write your function "det(M)" here. 

def det(M):
    mat=[list(i) for i in zip(*M)]
    return ((mat[0][0]*mat[1][1]) - (mat[0][1]*mat[1][0]))

print(det(M))  