a , b = map(int, input("").split())

if a < b:
    for i, j in zip(range(a, b + 1), range(b, a - 1, -1)):
        if i < b:
            print(f"{i} {j}", end=" - ")
        else: 
            print(f"{i} {j}")
else:
    for i, j in zip(range(a, b - 1, -1), range(b, a + 1)):
        if i > b:
            print(f"{i} {j}", end=" - ")  
        else: 
            print(f"{i} {j}")