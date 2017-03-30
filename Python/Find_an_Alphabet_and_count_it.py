#
#  http://www.programmr.com/zone/python
#
#  Find_an_Alphabet_and_count_it.py
#  ProgrammrPy
#


class AlphaCount:
    def __init__(self,inputstr,alphasearch):
        self.inputstr=inputstr
        self.alphasearch=alphasearch

    def firstpos(self):
        mypos=0
        for index,iterletter in enumerate(self.inputstr):
            if self.alphasearch==iterletter:
                mypos=index
                break
        
        return `mypos`
        
        #if mypos>0:
        #    return "Position of the occurence:" + `mypos`  
        #else:
        #    return "Not Present"

    def NumOccur(self):
        count=0
        for c in self.inputstr:
            if self.alphasearch==c:     
                count+=1
                
        return `count` 

        #if count==0:
        #    return " "
        #else:
            #return "Number of occurence:" + `count`     

    def __str__(self):
        fp=self.firstpos()  #Position of first occurrence
        no=self.NumOccur()  #Number of occurrence
        if fp=='0' and no=='0':
            return 'Not Present'
        else:
            return "%s\n%s" % (self.firstpos(), self.NumOccur())   #\n or \r


string = raw_input("Enter a string:")  
alpha = raw_input('Enter the alphabet to be searched:')  
  
#write down your logic here 
  
classrun=AlphaCount(string,alpha)

#resval1=classrun.firstpos()
#print (resval1)
#resval2=classrun.NumOccur()
#print (resval2)

print (str(classrun))
#OR
#print (classrun)
