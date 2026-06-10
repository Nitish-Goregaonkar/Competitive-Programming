print("===== CRYPT KICKER =====\n")

encrypted = input("Enter encrypted text: ")

decrypted = ""

# Shift every letter back by 1
for ch in encrypted:

    if 'b' <= ch <= 'z':
        decrypted += chr(ord(ch) - 1)

    elif 'B' <= ch <= 'Z':
        decrypted += chr(ord(ch) - 1)

    elif ch == 'a':
        decrypted += 'z'

    elif ch == 'A':
        decrypted += 'Z'

    else:
        decrypted += ch

print("\nDecrypted Text:", decrypted)