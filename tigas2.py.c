print("Pilihlah salah satu operator mtk berikut: ")
print("1. Penjumlahan")
print("2. Pengurangan")
inp =  input("Masukkan Pilihan 1 tau 2: ")
a = input("Masukkan bilangan pertama: ")
b = input("Masukkan bilanagn kedua: ")

def opmat(inp):
    if inp == '1':
        def jumlah(a,b):
            return float(a)+float(b)
        print(a+" + "+b+" = "+str(jumlah(a,b)))
    elif inp == '2':
        def kurang(a,b):
            return float(a)-float(b)
        print(a+" - "+b+" = "+str(kurang(a,b)))
    else:
        print("Pilihan yang anda masukkan salah!!")
opmat(inp)