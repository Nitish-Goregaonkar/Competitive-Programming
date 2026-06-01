print("===== GRAPHICAL EDITOR =====\n")

rows = int(input("Enter rows: "))
cols = int(input("Enter columns: "))

image = [['O' for _ in range(cols)] for _ in range(rows)]

print("\nInitial Image:\n")

for row in image:
    print(*row)