def main():
    for i in range(int(input())) : 
        n , cure = map(int  , input().split()) 
        a = list(map(int , input().split()))
        a.sort()
        pivot = 0 
        if a[n-1] < cure :
            pivot = n
        else : 
            for i in range(n-1) : 
                if(a[i] < cure and a[i+1] >  cure) : 
                    pivot = i+1 
                    break 
        counter = pivot 
        for i in a[::-1]: 
            infected = i
            days = 0 
            while infected >  0 : 
                infected -= cure
                infected = min(i , infected*2)
                cure *= 2
                days += 1 
            cure /= 2
            cure += infected/2
            counter += days
        print(counter)


if __name__ == "__main__":
    main()
