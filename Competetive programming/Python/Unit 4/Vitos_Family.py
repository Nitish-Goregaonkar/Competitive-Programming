print("===== VITO'S FAMILY =====\n")

n = int(input("Enter number of relatives: "))

print("\nEnter street numbers:")
print("Example: 2 4 6 8 10\n")

streets = list(map(int, input().split()))

streets.sort()

median = streets[n // 2]

distance = 0

for x in streets:
    distance += abs(x - median)

print("\nBest Street =", median)
print("Minimum Distance =", distance)