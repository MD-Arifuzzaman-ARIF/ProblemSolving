def main():
    shift = input().strip()  
    typed = input().strip()

    keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./"
    result = []

    for c in typed:
        pos = keyboard.index(c)
        if shift == 'R':
            result.append(keyboard[pos - 1])   
        else:  
            result.append(keyboard[pos + 1])  

    print("".join(result))

if __name__ == "__main__":
    main()
