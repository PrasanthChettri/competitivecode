import sys
for i in range(int(input())):
    n = int(input())
    power = pow(10 , n) 
    a = int(input())
    s = 2*power 
    print(s + a)
    sys.stdout.flush()
    b = int(input())
    s -= power 
    print(power - b)
    sys.stdout.flush()
    d = int(input())
    s -= power
    print(power - d)
    sys.stdout.flush()
    if '-1' == input():
        exit(0)
