start = int(input().strip()) 

for _ in range(start):
    line = input().strip()  
    
    for i in range(len(line)):
        if i == 0 and line[i] != ' ': 
            print(line[i], end="")
        elif line[i] == ' ' and i + 1 < len(line) and line[i + 1] != ' ':
            print(line[i + 1], end="")
    print()