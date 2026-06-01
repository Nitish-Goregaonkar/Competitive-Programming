def check(board, x, y, color):
    directions_knight = [(-2,-1),(-2,1),(2,-1),(2,1),
                         (-1,-2),(-1,2),(1,-2),(1,2)]

    directions_bishop = [(-1,-1),(-1,1),(1,-1),(1,1)]
    directions_rook = [(-1,0),(1,0),(0,-1),(0,1)]

    enemy_pawn = 'p' if color == 'white' else 'P'
    enemy_knight = 'n' if color == 'white' else 'N'
    enemy_bishop = 'b' if color == 'white' else 'B'
    enemy_rook = 'r' if color == 'white' else 'R'
    enemy_queen = 'q' if color == 'white' else 'Q'
    enemy_king = 'k' if color == 'white' else 'K'

    # Pawn attacks
    pawn_dirs = [(-1,-1),(-1,1)] if color == 'white' else [(1,-1),(1,1)]

    for dx, dy in pawn_dirs:
        nx, ny = x + dx, y + dy
        if 0 <= nx < 8 and 0 <= ny < 8:
            if board[nx][ny] == enemy_pawn:
                return True

    # Knight attacks
    for dx, dy in directions_knight:
        nx, ny = x + dx, y + dy
        if 0 <= nx < 8 and 0 <= ny < 8:
            if board[nx][ny] == enemy_knight:
                return True

    # Bishop/Queen attacks
    for dx, dy in directions_bishop:
        nx, ny = x + dx, y + dy
        while 0 <= nx < 8 and 0 <= ny < 8:
            piece = board[nx][ny]
            if piece != '.':
                if piece == enemy_bishop or piece == enemy_queen:
                    return True
                break
            nx += dx
            ny += dy

    # Rook/Queen attacks
    for dx, dy in directions_rook:
        nx, ny = x + dx, y + dy
        while 0 <= nx < 8 and 0 <= ny < 8:
            piece = board[nx][ny]
            if piece != '.':
                if piece == enemy_rook or piece == enemy_queen:
                    return True
                break
            nx += dx
            ny += dy

    # King attacks
    for dx in [-1,0,1]:
        for dy in [-1,0,1]:
            if dx == 0 and dy == 0:
                continue

            nx, ny = x + dx, y + dy

            if 0 <= nx < 8 and 0 <= ny < 8:
                if board[nx][ny] == enemy_king:
                    return True

    return False


game = 1

while True:
    board = [input() for _ in range(8)]

    if all(row == "........" for row in board):
        break

    input()

    for i in range(8):
        for j in range(8):
            if board[i][j] == 'K':
                white_king = (i, j)
            elif board[i][j] == 'k':
                black_king = (i, j)

    if check(board, white_king[0], white_king[1], 'white'):
        print(f"Game #{game}: white king is in check.")
    elif check(board, black_king[0], black_king[1], 'black'):
        print(f"Game #{game}: black king is in check.")
    else:
        print(f"Game #{game}: no king is in check.")

    game += 1