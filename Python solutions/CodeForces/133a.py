def main():
    s = input().strip()
    if any(ch in "HQ9" for ch in s):
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()
