print("===== SHELL SORT =====\n")

print("Enter numbers separated by spaces:")
print("Example:")
print("23 12 1 8 34 54 2 3\n")

arr = list(map(int, input().split()))

n = len(arr)

gap = n // 2

while gap > 0:

    for i in range(gap, n):

        temp = arr[i]

        j = i

        while j >= gap and arr[j-gap] > temp:

            arr[j] = arr[j-gap]
            j -= gap

        arr[j] = temp

    gap //= 2

print("\nSorted Array:")

print(arr)