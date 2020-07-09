for i in range(int(input())):
    test = int(input())
    dicti = {'A' : [0 , 0 , 0 , 0] , 'B' : [0 , 0 , 0 , 0] , 'C' : [0 , 0 , 0 , 0] , 'D' : [0 , 0 , 0 , 0]}
    for i in range(test):
        chari , time = input().split() 
        time = int(time)
        dicti[chari][time//4]  += 1 ;
