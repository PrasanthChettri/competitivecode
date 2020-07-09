def main():
    _ = input()
    print(min([j//i for i , j in zip(map(int , input().split()) , map(int , input().split()))]))

if __name__ == "__main__":
    main()
