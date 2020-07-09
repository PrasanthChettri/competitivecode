from math import factorial as fac

def main():
    for i in range(int(input())):
        n , p = map(int , input().split())
        n -= 1
        n_c=  n - p
        f_p = fac(p)
        temp = 0 
        is_valid = True 
        for k in range(2,  p+1):
            temp += f_p/fac(k)*fac(n-k)
            if temp > n_c :
                is_valid = False
                print(0)
                break
        if is_valid : 
            print(1)

if __name__ == "__main__":
    main()
