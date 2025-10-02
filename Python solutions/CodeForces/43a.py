n = int(input().strip())
goals = {}

for _ in range(n):
    team = input().strip()
    if team in goals:
        goals[team] += 1
    else:
        goals[team] = 1

# Find team with maximum goals
winner = max(goals, key=goals.get)
print(winner)
