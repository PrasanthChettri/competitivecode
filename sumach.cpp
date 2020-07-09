
# cook your dish here
testcases = int(input())
for test in range(testcases):
    n = int(input())
    s = input().split(' ')
    s = [int(i) for i in s]
    # Your Code
    fill = [0 for i in range(n)]
    counter = 0
    i = 0
    max_limit = n
    counter += s[0]
    least = s[0]
    for i in range(1,n):
        if least < s[i]:
            counter += least
        else:
            counter += s[i]
            least = s[i]
    print(counter)
