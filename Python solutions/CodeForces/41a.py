s = input()
t = input()

p = len(s)
l = len(t)

i, j = 0, l - 1

while i < p and j >= 0:
    if s[i] != t[j]:
        print("NO")
        exit()
    i += 1
    j -= 1

print("YES")