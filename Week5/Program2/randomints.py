from random import randint

MAX = 10**7
with open('integers.dat','w') as data:
    for x in range(25):
        rand_num = format(randint(0, MAX), ',d')
        data.write(rand_num)
        if randint(0,2) == 0: data.write('\n')
        else: data.write(' ')
