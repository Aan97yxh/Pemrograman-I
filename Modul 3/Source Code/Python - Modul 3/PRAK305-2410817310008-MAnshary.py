totaldetik = int(input("Masukkan jumlah detik: "))

hari = totaldetik // 86400
sisadetik = totaldetik % 86400
jam = sisadetik // 3600
sisadetik %= 3600
menit = sisadetik // 60
detik = sisadetik % 60

if hari>0:
    print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{detik:02d}")