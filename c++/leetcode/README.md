

## tambahkan-2-angka.cpp (problem leetcode no 2)
ada 2 angka yg __tidak kosong__ yang wewakili 2 bilangan bulat non-negatif , angka angka tersebut di dimpan dalam __urutan terbalik__ , dan masing masing sampulnya berisi 1 digit angka tambakan ke-2 angka tersebut dan kemabliakn jumlahnay sebagai daftar tertaut

Dapat asumsikan kedua angka tersebut tidak mengandung angka 0 kecuali 0 itu sendiri
__exaple__ 1
- l1 = [2,4,3] 
- l2 = [5,6,8]
    Ouputnya : [7,0,3]
penjelasan : 342 + 456 = 807 (angka yg di balik di tambah angka yg di balik)
__exaple__ 2
- l1 = [0]
- l2 =[0]
     Ouputnya = [0]

__exaple__ 3 
- l1 = [9,9,9,9,9,9,9] 
- l2 = [8,9,9,9,0,0,0,0,1]


## bilangan-palindrom.cpp (problem leetcode no 9)

di berikan bilangan bulat `x` , kemablikan `true` jika `x` merupakan palindrom dan false sebaliknya

contoh :
    x =121 
    keluartan `true`
    121 jika di balik tetap 121
    
    x = 01 
    keluarannya `flase`
    01 di balik jadi 10

## remove-duolicate-from-sorted-Array.cpp (problem leetcode no 26)
Hapus duplicate array yang di berikan jika sama kembalikan_
    input = [1,1,2]
    ouput = 2 , nums = [1,2,_]
