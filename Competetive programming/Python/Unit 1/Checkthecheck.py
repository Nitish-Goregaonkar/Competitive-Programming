print("===== CHECK THE CHECK =====\n")

print("Enter 8 rows of the chess board.")
print("Use:")
print("K = White King")
print("k = Black King")
print("R = White Rook")
print("r = Black Rook")
print(". = Empty Square\n")

print("Example Row:")
print("....k...\n")

board = []

for i in range(8):

    row = input(f"Enter Row {i+1}: ")

    board.append(row)

wx = wy = -1
bx = by = -1

for i in range(8):

    for j in range(8):

        if board[i][j] == 'K':

            wx = i
            wy = j

        if board[i][j] == 'k':

            bx = i
            by = j

white_check = False
black_check = False

for i in range(8):

    if board[i][wy] == 'r':

        white_check = True

for i in range(8):

    if board[i][by] == 'R':

        black_check = True

print("\n===== RESULT =====")

if white_check:

    print("White King is in Check")

elif black_check:

    print("Black King is in Check")

else:

    print("No King is in Check")