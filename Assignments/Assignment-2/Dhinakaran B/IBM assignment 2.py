import random
import time

while (1):
    temp = random.randint(0, 100)
    humidity = random.randint(0, 100)
    if temp>50:
        print("ALERT!! Detected temperature: "+str(temp)+"°C")
        time.sleep(1)

