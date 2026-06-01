print("===== PRIMARY ARITHMETIC =====\n")

num1 = int(input("Enter First Number: "))
num2 = int(input("Enter Second Number: "))

carry = 0
carry_count = 0

while num1 > 0 or num2 > 0:

    digit1 = num1 % 10
    digit2 = num2 % 10

    total = digit1 + digit2 + carry

    if total >= 10:
        carry = 1
        carry_count += 1
    else:
        carry = 0

    num1 //= 10
    num2 //= 10

if carry_count == 0:
    print("\nNo carry operation.")
elif carry_count == 1:
    print("\n1 carry operation.")
else:
    print(f"\n{carry_count} carry operations.")