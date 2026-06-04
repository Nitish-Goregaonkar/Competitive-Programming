print("===== MINESWEEPER =====\n")

rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))

grid = []

print("\nUse * for mine and . for empty")
print("Example:")
print("*...")
print("..*.")
print()

for i in range(rows):
    grid.append(list(input()))

result = [[0]*cols for _ in range(rows)]

for i in range(rows):
    for j in range(cols):

        if grid[i][j] == '*':
            result[i][j] = '*'
        else:
            count = 0

            for x in range(max(0,i-1), min(rows,i+2)):
                for y in range(max(0,j-1), min(cols,j+2)):
                    if grid[x][y] == '*':
                        count += 1

            result[i][j] = count

print("\nResult:")

for row in result:
    print(*row, sep="")