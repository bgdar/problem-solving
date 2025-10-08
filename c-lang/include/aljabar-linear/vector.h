#ifndef VECTOR_H
#define VECTOR_H

#include <cmath>
#include <stdio.h>
/**
 * kirim array unurk menampung hasilnya
 * arra  a & b adalah koordinat (a,b)
 */
void penjumlahanVector(int result[], const int a[], const int b[]) {
  // kembalikan array baru dari sebuah pointer ke memory
  result[0] = (a[0] + b[0]);
  result[1] = (a[1] + b[1]);
}
/**
 * @param b : array nilai koordinat b [..]
 * @param a : array kosordinat a [..]
 * @params result : array 2 value bertipe int
 */
void penguranganVector(int result[], const int a[], const int b[]) {
  result[0] = (a[0] - b[0]);
  result[1] = (a[1] - b[1]);
}

/**
 *@brif vector di kalikan bialngan k
 k.(a1 ,a2) = (k.a1 , k.a2)
 */
void perkalianVector(int result[], const int k, const int koordinat[]) {
  result[0] = (k * koordinat[0]);
  result[1] = (k * koordinat[1]);
}
/**
 * @brif panjang (magnitude)
 */
int panjangVector(const int koordinat[]) {
  // std::sqrt = untuk akar
  // std::pow = untuk pangkat
  return std::sqrt(std::pow(koordinat[0], 2) + std::pow(koordinat[1], 2));
}

/**
 * Dot product
 *  a.b = a1.b1 + a2.b2
 */
int dotProductVector(const int a[], const int b[]) {
  return (a[0] * b[0]) + (a[1] * b[1]);
}

#endif // !VECTOR_H
#define VECTOR_H
