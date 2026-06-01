print("===== FILE FRAGMENTATION =====\n")

n = int(input("Enter number of fragments: "))

fragments = []

for i in range(n):

    fragments.append(input(f"Fragment {i+1}: "))

print("\nReconstructed File:")

result = ""

for item in fragments:
    result += item

print(result)