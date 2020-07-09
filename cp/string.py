#STRING , MASK --> _TRING 
for _ in range(int(input())):
    string = input()
    mask = input()
    for i in string:
        if not i in mask :
            print(i , end = '')
    print()
