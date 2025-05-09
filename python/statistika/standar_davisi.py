import math

def Standar_davisi(array_data)->float :

    panjang_data = len(array_data)
    panjang_total = 0
    # cara dapatkan panjang langsung = print(sum(example_data))
    for data in array_data:
        panjang_total += data
    rata_rata =  round(panjang_total / panjang_data)
    # variasi populas
    line_jumlah=0
    for data in array_data:
        xi = data - rata_rata
        xi_kuadrad = xi**2
        line_jumlah += xi_kuadrad
    varian_populasi = line_jumlah / panjang_data

    return round(math.sqrt(varian_populasi),2)#format hasil 2 angka di belang koma


if __name__ == "__main__":
   standar_davisi = Standar_davisi([6,7,8,8,9,10])
   print("Hasil = ",standar_davisi)
