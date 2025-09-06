def main():
    n = int(input())
    a = input().strip()
    count = 1
    
    for _ in range(1, n):
        b = input().strip()
        if b != a:
            count += 1
        a = b
    
    print(count)

if __name__ == "__main__":
    main()
