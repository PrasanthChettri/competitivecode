for i in range(int(input())):
    ram , shyam = map(int , input().split())
    counter = 1
    for i in range(2 , max(ram , shyam)):
        if (ram - 1)%i == (shyam - 1)%i :
            counter += 1 
    print(counter)
