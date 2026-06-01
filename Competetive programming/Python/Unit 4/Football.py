print("===== FOOTBALL =====\n")

teams = int(input("Enter number of teams: "))

table = {}

for i in range(teams):

    name = input(f"Team {i+1} Name: ")

    table[name] = 0

matches = int(input("\nEnter number of matches: "))

for i in range(matches):

    print(f"\nMatch {i+1}")

    team1 = input("Team 1: ")
    score1 = int(input("Team 1 Score: "))

    team2 = input("Team 2: ")
    score2 = int(input("Team 2 Score: "))

    if score1 > score2:

        table[team1] += 3

    elif score2 > score1:

        table[team2] += 3

    else:

        table[team1] += 1
        table[team2] += 1

print("\nLEAGUE TABLE\n")

ranking = sorted(table.items(),
                 key=lambda x: x[1],
                 reverse=True)

for team, points in ranking:

    print(team, "-", points, "points")