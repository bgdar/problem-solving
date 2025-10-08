#include "./include/aljabar-linear/vector.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int result[2] = {};
  const int a[2] = {1, 2};
  const int b[2] = {3, 4};

  penjumlahanVector(result, a, b);
  printf("hasil penjumlahan vector: [%d,%d] \n", result[0], result[1]);
  penguranganVector(result, a, b);
  printf("hasil penjumlahan vector: [%d,%d] \n", result[0], result[1]);

  const int skalar[2] = {3, 2};
  perkalianVector(result, 2, skalar);
  printf("perkalian  vector [%d,%d] \n", result[0], result[1]);

  const int panjangDariVector[2] = {3, 4};
  int hasilPanjang = panjangVector(panjangDariVector);
  printf("panjang yang di dapat : %d \n", hasilPanjang);

  const int dotProductA[2] = {2, 3};
  const int dotProductB[2] = {4, 5};
  int hasilDotProduct = dotProductVector(dotProductA, dotProductB);
  printf("hasil dot Product dari a[%d,%d] x b[%d,%d] = %d", dotProductA[0],
         dotProductA[1], dotProductB[0], dotProductB[1], hasilDotProduct);

  return EXIT_SUCCESS;
}
