print("===== FMT =====\n")

text = input("Enter paragraph:\n")

width = int(input("\nEnter line width: "))

words = text.split()

line = ""

print("\nFormatted Text:\n")

for word in words:

    if len(line) + len(word) + 1 <= width:

        if line:
            line += " "

        line += word

    else:

        print(line)

        line = word

if line:
    print(line)