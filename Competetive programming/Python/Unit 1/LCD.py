print("===== LCD DISPLAY =====\n")

num = input("Enter a number: ")

for digit in num:

    print("\nDigit:", digit)

    if digit == '0':
        print(" _ ")
        print("| |")
        print("|_|")

    elif digit == '1':
        print("   ")
        print("  |")
        print("  |")

    elif digit == '2':
        print(" _ ")
        print(" _|")
        print("|_ ")