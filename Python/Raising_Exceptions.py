#
#  http://www.programmr.com/zone/python
#
#  Raising_Exceptions.py
#  ProgrammrPy
#

#1)
import sys

if (sys.version_info[0]>=3): raw_input=input

s = map(str,raw_input("Enter the string:"))
 
def length(s):
    # write your logic here
    try:
        if len(s)<3:
            raise Exception("String is too short")
        #else:
            #return 'Length of string is ' + str(len(s))     
    except Exception as inst: #or Exception,e
        return (inst) #or inst.args
    else:
        return 'Length of string is ' + str(len(s))      
    
        
print (length(s))


#OR

#2)
#class MyError(Exception):
#    def __init__(self,strv):
#        self.strv=strv
#    def __str__(self):
#        return (self.strv)

#try:
    
#    mystr = raw_input("Enter the string: ")
    
#    if len(mystr)<3:
#        raise MyError("String is too short")
        
#except MyError as inst:
#    print (str(inst))
#else:
#    print ("Length of string is " + str(len(mystr)))