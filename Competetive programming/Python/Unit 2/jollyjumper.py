print("===== JOLLY JUMPERS =====\n")

n = int(input("Enter number of elements: "))

print("\nEnter the sequence:")
print("Example: 1 4 2 3\n")

arr = list(map(int, input().split()))

diffs = set()

for i in range(n - 1):
    diffs.add(abs(arr[i] - arr[i + 1]))

jolly = True

for i in range(1, n):
    if i not in diffs:
        jolly = False
        break

if jolly:
    print("\nJolly")
else:
    print("\nNot Jolly")