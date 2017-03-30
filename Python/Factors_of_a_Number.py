#
#  http://www.programmr.com/zone/python
#
#  Factors_of_a_Number.py
#  ProgrammrPy
#

n=int(input("Enter the number:")) 
# Write your logic here 
     
for i in range(1,n+1):
    if n%i==0:
        print (i)

#OR
          
#from functools import reduce

#n=int(input("Enter the number:")) 
     
#mylist=(sorted(list(set(reduce(list.__add__,([i,n/i] for i in range(1,int(n**0.5)+1) if n%i==0))))))

#mylist=map(str,mylist)

#print ("\n".join(mylist))
#OR
#for i in range(len(mylist)):
#    print mylist[i]