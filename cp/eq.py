memoi = []
memod = []
i_count  = 0
d_count  = 0
def ievaluate(p  , q):
    global a  , n  ,  l  , r , i_count , memoi
    if (p , q) in memoi or p == q or p < l or q > r :
        return
    memoi.append((p , q))
    if (p > l and a[p]  >  a[p-1]) or  (q < r and a[q] < a[q+1]):
            ievaluate(p + 1 ,q)
            ievaluate(p  , q-1)
            return 

    for i in range(p , q):
        if a[i] > a[i+1]:
            ievaluate(p + 1 ,q)
            ievaluate(p  , q-1)
            return 
    i_count+=1 
    ievaluate(p + 1 ,q)
    ievaluate(p  , q-1)

def devaluate(p  , q):
    global a  , n  ,  l  , r , d_count , memod
    if (p , q) in memod or p == q or p < l or q > r:
        return
    memod.append((p , q))
    if (p < l and a[p] < a[p-1]) or  (q > r and a[q] > a[q+1]) :
        devaluate(p + 1 ,q)
        devaluate(p  , q-1)
        return 
    for i in range(p , q):
        if a[i] < a[i+1]:
            devaluate(p + 1 ,q)
            devaluate(p  , q-1)
            return 
    d_count+= 1 
    devaluate(p + 1 ,q)
    devaluate(p  , q-1)

n , q = map(int , input().split())
a = list(map(int , input().split()))
for i in range(q):
    l , r = map(int , input().split())
    l = l - 1
    r = r - 1
    ievaluate(l , r)
    devaluate(l , r)
    print(["NO" , "YES"][i_count == d_count])
    i_count = 0 
    memoi = []
    d_count = 0 
    memod = []
