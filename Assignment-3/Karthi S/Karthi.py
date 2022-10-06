import random
import time 
while (1):
    
    a=random.randint (1,3)
    
    #RED = 1
    #YELLOW = 2
    #GREEN = 3
    if(a>0):      
        print ("traffic light is blinking ", a, "", "led is on")
        time.sleep(5)
        print ("traffic light is not blinking ", a, "", "led is off")
        time.sleep(0)
       
