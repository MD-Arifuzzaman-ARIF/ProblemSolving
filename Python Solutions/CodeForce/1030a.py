def main():
    b = int(input())
    arr = list(map(int, input().split()))
    
    if 1 in arr:
        print("Hard")
    else:
        print("Easy")

if __name__ == "__main__":
    main()
