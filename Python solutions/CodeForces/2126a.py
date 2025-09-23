t = int(input())
for _ in range(t):
    x = input().strip()      # read as string directly
    min_digit = min(x)       # find the smallest digit (as char)
    print(int(min_digit))    # convert back to int before printing
