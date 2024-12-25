n, k = map(int, input("").split())
total = 0

for i in range(1, n + 1):
    baris = 0
    for j in range(1, i + 1):
        baris += j * k
    print(" + ".join(f"({j} * {k})" for j in range(1, i + 1)), f"= {baris}")
    total += baris

print("", total)