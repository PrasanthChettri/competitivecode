n , m  , q = map(int , input().split())
guard = [0]*n
for i in range(m):
    x , y  = map(int , input().split())
    if(x < 0):
        x = x+1
    if(y > 0):
        y = y-1
    x , y = abs(x) , abs(y)
    inp = max(x, y)
    guard[inp]+= 1

for i in range(q):
    inp = int(input())
    print(4*inp*inp-sum(guard[:inp]))
