n = int(input())
X = 0

for _ in range(n):
    s = input().strip()
    if '+' in s:
        X += 1
    else:
        X -= 1

print(X)
