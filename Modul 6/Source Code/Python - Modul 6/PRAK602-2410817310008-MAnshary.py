ruang = int(input()) 
ruang_zetsu = list(map(int, input().split()))

for i in range(ruang):
    print(ruang_zetsu[i] * (i + 1), end=" ")