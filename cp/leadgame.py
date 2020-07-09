maxi = 0
player = 1
for i in range(int(input())):
    a , b = map(int , input().split())
    score = abs(a-b)
    if (score > maxi):
        maxi = score  ;
        if (a < b):
            player = 2 
        else :
            player = 1
print(player , maxi , sep = ' ')
