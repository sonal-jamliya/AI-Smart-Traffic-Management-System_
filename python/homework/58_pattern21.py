n = int(input("Enter number of rows: "))

for i in range(1, n + 1):
    # spaces
    for j in range(n - i):
        print(" ", end="")
    
    # stars and spaces
    for j in range(1, 2*i):
        if j == 1 or j == 2*i - 1:
            print("*", end="")
        else:
            print(" ", end="")
    
    print()

for i in range(n - 1, 0, -1):
    # spaces
    for j in range(n - i):
        print(" ", end="")
    
    # stars and spaces
    for j in range(1, 2*i):
        if j == 1 or j == 2*i - 1:
            print("*", end="")
        else:
            print(" ", end="")
    
    print()