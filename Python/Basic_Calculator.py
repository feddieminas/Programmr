#
#  http://www.programmr.com/zone/python
#
#  Basic_Calculator.py
#  ProgrammrPy
#

x = input('Enter the first number:')
y = input('Enter the second number:')
op = int(input('''Enter the operation you want to perform :
    1) Addition:
    2) Subtraction:
    3) Multiplication:
    4) Division:'''))
 
result=0
 
#write down your logic here
def add(x,y):
    """This function adds two number"""
    return x+y


def subtract(x,y):
    """This function subtracts two numbers"""
    return x-y


def multiply(x,y):
    """This function multiplies two numbers"""
    return x*y

def divide(x,y):
    """This function divides two numbers"""
    return float(x)/float(y)


#1)
#Equivalent of Switch statement
options={1: add, 2: subtract, 3:multiply, 4:divide}
if op>=1 and op<=4:
    result=options[op](x,y)
else:
    result="Invalid input"


#OR

#2)
#if op== 1:
#    result=add(x,y)

#elif op==2:
#    result=subtract(x,y)

#elif op==3:
#    result=multiply(x,y)

#elif op==4:
#    result=divide(x,y)

#else:
#    result="Invalid input"
     

print("Result is:")
print(result)