#case 1
jarijari1 = float(input())
tinggi1 = float(input())
 
volume1 = 22 / 7 * jarijari1**2 * tinggi1
luas1 = 2 * 22 / 7 * jarijari1 * (jarijari1 + tinggi1) 
keliling1 = 2 * 22 / 7 * jarijari1 
 
print(f"Volume = {volume1:.2f}") 
print(f"Luas = {luas1:.2f}") 
print(f"Keliling = {keliling1:.2f} \n") 

#case 2 
jarijari2, tinggi2 = map(float, input().split())
 
volume2 = 22 / 7 * jarijari2**2 * tinggi2 
luas2 = 2 * 22 / 7 * jarijari2 * (jarijari2 + tinggi2) 
keliling2 = 2 * 22 / 7 * jarijari2 

print(f"Volume = {volume2:.2f}") 
print(f"Luas = {luas2:.2f}") 
print(f"Keliling = {keliling2:.2f}")