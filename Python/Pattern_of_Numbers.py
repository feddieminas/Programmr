#
#  http://www.programmr.com/zone/python
#
#  Pattern_of_Numbers.py
#  ProgrammrPy
#


n=input("Enter the limit:")
n=int(n)
#Write your logic here


for i in range(1,n+2):
    pr=''
    for j in range(1,i):
        pr+=str(j)
    print(str(pr)) # added end=''
    #print("") # printing newline here


#OR

#n=input("Enter the limit:")
#n=int(n)

#print ('\n'.join([''.join(['{0}'.format(i) for i in range(1,j)]) for j in range(1,n+2)]))