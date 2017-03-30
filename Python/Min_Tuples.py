#
#  http://www.programmr.com/zone/python
#
#  Min_Tuples.py
#  ProgrammrPy
#


from functools import reduce

a=float(input("Enter the first number:"))
b=float(input("Enter the second number:"))
c=float(input("Enter the third number:"))
#write your logic here

numbers=()
numberscount=(a,b,c)
count=0
while count<3:
    numbers+=(numberscount[count],) #create a new tuple as copy to numbercount
    count+=1


f=lambda x,y: x if (x<y) else y
resval=reduce(f,numbers) #OR reduce(f,numberscount) #OR reduce(f,list(numbers))
print (resval)