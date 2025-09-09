s = input().strip()
count = 0

for i in range(len(s) - 1):
    if s[i] == s[i + 1]:
        count += 1
        if count == 6:
            print("YES")
            exit()
    else:
        count = 0

print("NO")