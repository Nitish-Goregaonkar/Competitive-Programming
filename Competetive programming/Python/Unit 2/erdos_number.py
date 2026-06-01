print("===== ERDOS NUMBERS =====\n")

authors = {}

n = int(input("Enter number of collaborations: "))

for i in range(n):

    print(f"\nCollaboration {i+1}")

    a = input("Author 1: ")
    b = input("Author 2: ")

    if a not in authors:
        authors[a] = []

    if b not in authors:
        authors[b] = []

    authors[a].append(b)
    authors[b].append(a)

queue = ["Erdos"]
distance = {"Erdos": 0}

while queue:

    current = queue.pop(0)

    for neighbor in authors.get(current, []):

        if neighbor not in distance:

            distance[neighbor] = distance[current] + 1
            queue.append(neighbor)

print("\nErdos Numbers:\n")

for person in distance:
    print(person, "=", distance[person])