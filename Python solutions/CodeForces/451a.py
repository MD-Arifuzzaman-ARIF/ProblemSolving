# Read input
n, m = map(int, input().split())

# Number of moves possible = min(n, m)
moves = min(n, m)

# If moves are odd -> Akshat wins, else Malvika wins
if moves % 2 == 1:
    print("Akshat")
else:
    print("Malvika")
4