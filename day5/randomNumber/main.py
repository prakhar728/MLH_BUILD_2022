import time

def random_number(seed,num):
    rando=seed
    for i in range(num):
        rando = (13*rando + 53)%90060
        print(rando)
    
t = time.localtime()
current_time = time.strftime("%H:%M:%S", t)
print(current_time)
hours=int(current_time[:2])
minutes=int(current_time[3:5])
seconds=int(current_time[6:])
seedRandom=seconds+minutes*60+hours*60*60
num=int(input("Enter number of random numbers you want"))
random_number(seedRandom,num)