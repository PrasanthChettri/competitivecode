for _ in range(int(input())):
    string = input()
    counter=0 
    i = 0 
    len_s = len(string)
    while(i < len_s):
        cur= string[i]
        while(cur == string[i]):
            i += 1
            if (i >= len_s):
                break 
        counter += 1
        if (i >= len_s):
            break 
    print(["YES" , "NO"][counter >  len_s])
