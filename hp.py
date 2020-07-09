def func(x):
    n = 0 
    temp = x 
    while x : 
        n += (x%10)**2
        x /= 10
    if temp ==  1:
        return True  
    if temp > n :
        return False
    return func(n)
def hpn

