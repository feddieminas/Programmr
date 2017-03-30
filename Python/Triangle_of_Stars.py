#
#  http://www.programmr.com/zone/python
#
#  Triangle_of_Stars.py
#  ProgrammrPy
#


import sys

n=input("Enter the number of lines of stars you want:")
 
#Write your logic here

if n<=0: sys.exit()

for i in range(1,n+1):
    stars=['*'] * i
    concatit=''.join(stars)
    print(concatit)
    

#OR

#n=input("Enter the number of lines of stars you want:")

#if n<=0: sys.exit()

#Recurse function
#def recur_triangle(np):
#    if np==0: return
#    print(''.join(['*'] * (n-np+1)))
#    recur_triangle(np-1)

#recur_triangle(n) 