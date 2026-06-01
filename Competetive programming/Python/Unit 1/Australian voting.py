print("===== AUSTRALIAN VOTING =====\n")

candidates = []

n = int(input("Enter number of candidates: "))

for i in range(n):
    candidates.append(input("Candidate Name: "))

votes = [0] * n

m = int(input("\nEnter number of voters: "))

for i in range(m):

    choice = int(input("Vote for candidate number (1-%d): " % n))

    votes[choice - 1] += 1

winner = votes.index(max(votes))

print("\nWinner =", candidates[winner])