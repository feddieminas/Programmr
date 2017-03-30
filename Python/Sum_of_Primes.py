#
#  http://www.programmr.com/zone/python
#
#  Sum_of_Primes.py
#  ProgrammrPy
#


n=int(input()) 
total=0
 
#write down your logic here
for num in range(1,n + 1):
    # prime numbers are greater than 1
    if num > 1:
        for i in range(2,num):
            if (num % i) == 0:
                break
        else:
            total+=num
#

print(total) 