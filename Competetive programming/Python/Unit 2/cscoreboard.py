print("===== CONTEST SCOREBOARD =====\n")

teams = int(input("Enter number of teams: "))

data = []

for i in range(teams):

    print(f"\nTeam {i+1}")

    solved = int(input("Solved Problems: "))
    penalty = int(input("Penalty: "))

    data.append([i+1, solved, penalty])

data.sort(key=lambda x: (-x[1], x[2]))

print("\nFINAL RANKING\n")

for rank, team in enumerate(data, start=1):

    print(
        rank,
        "Team",
        team[0],
        "Solved:",
        team[1],
        "Penalty:",
        team[2]
    )