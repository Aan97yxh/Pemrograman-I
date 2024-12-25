def maksimal(a, b):
    if a < b: return b
    else: return a

def minimal(a, b):
    if a > b: return b
    else: return a

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())

i = 0
nilai = input().split()

while i < bilangan:
    maks = maksimal(maks, int(nilai[i]))
    minim = minimal(minim, int(nilai[i]))
    i += 1

print(maks, minim)