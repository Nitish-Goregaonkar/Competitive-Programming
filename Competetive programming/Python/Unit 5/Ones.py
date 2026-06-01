print("===== ONES =====\n")

n = int(input("Enter Number: "))

remainder = 1 % n
length = 1

while remainder != 0:

    remainder = (remainder * 10 + 1) % n

    length += 1

print("\nLength =", length)