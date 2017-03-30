#
#  http://www.programmr.com/zone/python
#
#  Report_Info.py
#  ProgrammrPy
#


import sys

class Person(object):
    def __init__(self,name,city):
        self.name=name
        self.city=city
    #1)
    def report(self):
        print ("%s\n%s") % (self.name, self.city)
    #2)
    #def __str__(self):
    #    return ("%s\n%s") % (self.name, self.city)    

class Programmer(Person):
    def __init__(self,name,city,programming_language):
        self.name=name
        self.city=city
        self.programming_language=programming_language
    #1)
    def report(self):
        print ("%s\n%s\n%s") % (self.name, self.city, self.programming_language)
    #2)
    #def __str__(self):
    #    return ("%s\n%s\n%s") % (self.name, self.city, self.programming_language)    

if (sys.version_info[0]>=3): raw_input=input
myPerson=Programmer(raw_input("Name: "), raw_input("city: "), raw_input("programming language: "))

#1)
myPerson.report()
#2)
#print myPerson or print (myPerson)
