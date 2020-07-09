r , q =  input().split()
matrix  = [None] * 2
matrix[0] = list(map(int , input().split()))
matrix[1] = list(map(int , input().split()))
for i in range(int(q)):
    a ,b = map(lambda x: int(x)-1 , input().split())
    maxi  = matrix[a][b];
    counter = 0
    for i in range(b+1):
        if (matrix[a][i] <= maxi):
            counter += 1
    print(counter)
    
