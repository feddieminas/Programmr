#
#  http://www.programmr.com/zone/python
#
#  Ascending_Order.py
#  ProgrammrPy
#


numbers=[]
numberscount=['1st','2nd','3rd']
count=0
while count<3:
    X=float(input("Enter " + numberscount[count] + " number:"))
    if (X).is_integer(): X=int(X)
    
    numbers.append(X)
    count+=1

numbers=sorted(numbers)

for i in xrange(0,len(numbers)):    
    print numbers[i],