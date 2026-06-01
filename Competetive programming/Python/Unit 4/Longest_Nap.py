print("===== LONGEST NAP =====\n")

appointments = int(input("Enter number of meetings: "))

times = []

for i in range(appointments):

    start = int(input(f"Meeting {i+1} Start Hour: "))
    end = int(input(f"Meeting {i+1} End Hour: "))

    times.append((start, end))

times.sort()

longest = 0

for i in range(len(times)-1):

    gap = times[i+1][0] - times[i][1]

    if gap > longest:
        longest = gap

print("\nLongest Nap =", longest, "hours")