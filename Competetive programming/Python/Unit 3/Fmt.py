print("===== FMT (TEXT FORMATTER) =====\n")

print("Enter a paragraph:")
print("Example: This is a sample paragraph for testing the formatter.\n")

text = input()

print("\nFormatted Output:\n")

count = 0

for ch in text:

    print(ch, end="")
    count += 1

    if count >= 50 and ch == ' ':
        print()
        count = 0