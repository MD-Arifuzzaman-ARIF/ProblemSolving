def main():
    s1, s2 = input().strip(), input().strip()

    s1 = s1.lower()
    s2 = s2.lower()

    if s1 < s2:
        print(-1)
    elif s1 > s2:
        print(1)
    else:
        print(0)


if __name__ == "__main__":
    main()
