bil = int(input("Masukkan Bilangan: "))

if bil >=1 and bil<=9:
    print("Satuan")
elif bil==10 or bil>=20 and bil<=99:
    print("Puluhan")
elif bil>=11 and bil<=19:
    print("Belasan")
elif bil==0:
    print("Nol")
else:
    print("Anda Menginput Melebihi Limit Bilangan")