p = float(input("Enter principal: "))
r = float(input("Enter rate of interest: "))
t = float(input("Enter time (in years): "))

amount = p * (1 + r/100) ** t
ci = amount - p
print("Compound Interest:", ci)