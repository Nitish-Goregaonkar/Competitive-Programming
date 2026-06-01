keyboard = "`1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./"

print("===== WERTYU =====\n")

print("Enter text:")
text = input()

result = ""

for ch in text:

    if ch == ' ':
        result += ' '

    else:
        pos = keyboard.find(ch)

        if pos > 0:
            result += keyboard[pos - 1]
        else:
            result += ch

print("\nCorrected Text:")
print(result)