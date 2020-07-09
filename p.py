from math import exp
for _ in range(int(input())):
    n , a = map(int , input().split())
    num = a
    for i in range(n):
        for j in range(i):
            num *=  num
    print(num)
    print((n*2 - 1)*num%10000007)
