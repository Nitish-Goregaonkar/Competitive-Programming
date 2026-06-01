print("===== STERN-BROCOT =====\n")

m = int(input("Enter Numerator: "))
n = int(input("Enter Denominator: "))

ln, ld = 0, 1
rn, rd = 1, 0
mn, md = 1, 1

path = ""

while mn != m or md != n:

    if m * md < n * mn:

        path += "L"

        rn, rd = mn, md

    else:

        path += "R"

        ln, ld = mn, md

    mn = ln + rn
    md = ld + rd

print("\nPath =", path)