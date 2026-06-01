print("===== REVERSE AND ADD =====\n")

num = int(input("Enter Number: "))

count = 0

while True:

    rev = int(str(num)[::-1])

    if num == rev:
        break

    num += rev
    count += 1

print("\nPalindrome =", num)
print("Iterations =", count)