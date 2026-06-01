print("===== COMMON PERMUTATION =====\n")

print("Enter first string:")
a = input()

print("\nEnter second string:")
b = input()

result = ""

for ch in sorted(set(a)):

    result += ch * min(a.count(ch), b.count(ch))

print("\nCommon Characters:")
print(result)