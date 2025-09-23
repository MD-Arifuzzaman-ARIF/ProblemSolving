n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    if b % 2 == 0:
        print(0)
    else:
        print(a)
