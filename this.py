def main() :
    n = int(input())
    k = list( map (int , input().split()))
    k.sort(reverse = True)
    s = 0 
    for i ,  num in enumerate(k): 
        if (num - i) > 0 : 
            s += (num - i)
    return s 
    
if __name__ == "__main__":
    for i in range(int(input())):
        print (main()%1000000007)
        
