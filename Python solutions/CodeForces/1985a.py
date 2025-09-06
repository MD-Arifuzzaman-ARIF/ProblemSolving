t = int(input())

results = []

for i in range(t):
    a, b = input().split()
    
    # Swap the first characters of a and b
    a_new = b[0] + a[1:]
    b_new = a[0] + b[1:]
    
    # Store the result
    results.append(a_new + " " + b_new)

# Output all results
for result in results:
    print(result)