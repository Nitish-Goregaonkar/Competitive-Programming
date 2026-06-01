print("===== PAIRSUMONIOUS NUMBERS =====\n")

n = int(input("Enter number count: "))

print("\nEnter original numbers:")
print("Example: 1 2 3 4\n")

numbers = list(map(int, input().split()))

print("\nPair Sums:")

for i in range(n):

    for j in range(i + 1, n):

        print(
            numbers[i] + numbers[j],
            end=" "
        )