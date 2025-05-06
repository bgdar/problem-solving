matrix_1 = [[2,4],
            [6,8]]

matrix_2 = [[2,5],
            [7,9]]

print("example matrix \n")
print(matrix_1[0],matrix_2[0])
print(matrix_1[1],matrix_2[1])

print("Penjumlahan :\n")
#for mx_1 in matrix_1:
 #   for mx_2 in matrix_2:
  #      print(mx_1[0],mx_2[0])
   #     print(mx_1[1],mx_2[1])
    #    print(mx_1 + mx_2)


print("dari panjang matrix",len(matrix_1[0]))

for mx_length in range(len(matrix_1[0]) + 1):
    print(matrix_1[mx_length - 1][0] + matrix_2[mx_length - 1 ][0],matrix_1[0][1] + matrix_2[0][1])
    
# print(matrix_2[1][0] + matrix_2[1][0],matrix_1[1][1] + matrix_2[1][1])

                                       
