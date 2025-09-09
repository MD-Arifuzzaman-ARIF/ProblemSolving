t = int(input())

for _ in range(t):
    a, b = input().split()
    
    # Swap the first characters of a and b
    a_new = b[0] + a[1:]
    b_new = a[0] + b[1:]
    
    print(a_new, b_new)