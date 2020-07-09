def func(arr , l , k):
    if l == 1 :
        return temp[0]
    if l%k != 0 : arr.remove(k - l%k)
    return func(arr , len(arr) , k)
            
for _ in range(int(input())):
    n  , k = map(int , input().strip().split())
    arr = list(range(1 , n + 1))
    print(func(arr , n, k))
