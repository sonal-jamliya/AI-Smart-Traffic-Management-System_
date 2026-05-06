n = int(input("Enter number of rows: "))

for i in range(1, n + 1):
    # left stars
    for j in range(1, i + 1):
        print("*", end="")
    
    # spaces
    for j in range(1, 2*(n - i) + 1):
        print(" ", end="")
    
    # right stars
    for j in range(1, i + 1):
        print("*", end="")
    
    print()

for i in range(n, 0, -1):
    # left stars
    for j in range(1, i + 1):
        print("*", end="")
    
    # spaces
    for j in range(1, 2*(n - i) + 1):
        print(" ", end="")
    
    # right stars
    for j in range(1, i + 1):
        print("*", end="")
    
    print()