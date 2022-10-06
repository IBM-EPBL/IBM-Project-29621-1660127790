import random
import time
while (1):

    a=random.randint (1,3)

    if (a>0):

        print ("traffic light is blinking ", a, "", "led is on")

        time.sleep(10)

        print ("traffic light is blinking ", a, "", "led is off")

        time.sleep (1)
