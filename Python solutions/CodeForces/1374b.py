t = int(input())
for _ in range(t):
    n = int(input())
    
    cnt2, cnt3 = 0, 0
    
    while n % 2 == 0:
        cnt2 += 1
        n //= 2
    
    while n % 3 == 0:
        cnt3 += 1
        n //= 3
    
    if n != 1 or cnt2 > cnt3:
        print(-1)
    else:
        print(2 * cnt3 - cnt2)
