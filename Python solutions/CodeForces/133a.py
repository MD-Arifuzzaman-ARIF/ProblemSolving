s = input().strip()
if any(ch in "HQ9" for ch in s):
    print("YES")
else:
    print("NO")