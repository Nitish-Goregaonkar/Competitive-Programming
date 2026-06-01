print("===== CRYPT KICKER =====\n")

print("Enter encrypted text:")
text = input()

shift = int(input("\nEnter shift value: "))

result = ""

for ch in text:

    if ch.isalpha():

        base = ord('a')

        new_char = chr((ord(ch.lower()) - base - shift) % 26 + base)

        result += new_char

    else:
        result += ch

print("\nDecrypted Text:")
print(result)