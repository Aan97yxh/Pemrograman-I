while True:
    print("Pilih program: ")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan: "))

    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator M.Anshary")
        break
    elif pilihan in {1, 2, 3, 4}:
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))
        
        if pilihan == 1:
            print(f"Hasil Penjumlahan antara {a:.2f} dan {b:.2f} adalah {a + b:.2f}")
        elif pilihan == 2:
            print(f"Hasil Pengurangan antara {a:.2f} dan {b:.2f} adalah {a - b:.2f}")
        elif pilihan == 3:
            print(f"Hasil Perkalian antara {a:.2f} dan {b:.2f} adalah {a * b:.2f}")
        elif pilihan == 4:
            if b != 0:
                print(f"Hasil Pembagian antara {a:.2f} dan {b:.2f} adalah {a / b:.2f}")
            else :
                print("Error: Pembagian dengan Nol.")
    else:
        print("Input anda salah, silahkan coba lagi")