octal = input("Enter octal number: ")

decimal = 0
power = 0

for digit in reversed(octal):
    decimal = decimal + int(digit) * (8 ** power)
    power = power + 1

print("Decimal value:", decimal)