for i in range(int(input())):
    len = int(input())
    k = input().split(' ')
    maxm  = k[-1]
    array = [maxm]
    for i in k[::-1][1:]:
        if maxm < i:
            array.append(i)
            maxm = i
    print(*array)
