baris, kolom = map(int, input().split())
elemen = list(map(int, input().split()))

for i in range(0, len(elemen), kolom):  
    print(*elemen[i : i + kolom])