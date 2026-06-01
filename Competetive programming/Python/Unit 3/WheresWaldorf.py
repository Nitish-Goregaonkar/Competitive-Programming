print("===== WHERE'S WALDORF =====\n")

rows = int(input("Enter rows: "))
cols = int(input("Enter columns: "))

grid = []

print("\nEnter grid:")

for i in range(rows):
    grid.append(input().lower())

word = input("\nEnter word to search: ").lower()

found = False

for i in range(rows):

    for j in range(cols):

        if grid[i][j] == word[0]:

            found = True

            print("\nWord starts at:")
            print("Row =", i + 1)
            print("Column =", j + 1)

            break

    if found:
        break

if not found:
    print("\nWord not found")