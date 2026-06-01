key = "the quick brown fox jumps over the lazy dog"

print("===== CRYPT KICKER II =====\n")

print("Enter encrypted sentence:")
cipher = input()

mapping = {}

for c, k in zip(cipher, key):

    if c != ' ':
        mapping[c] = k

decoded = ""

for ch in cipher:

    if ch == ' ':
        decoded += ' '
    else:
        decoded += mapping.get(ch, '?')

print("\nDecoded Message:")
print(decoded)