

#include <iostream>

class Solution {
  int revelsed = 0 ;
  public :
    bool isPalindrome(int x){
//    if (x <= 0)  return false;
    int originalX = x; // salin nilai x karena alur nya berubah atau x akan di ubah

    while (x > 0) {
      int digit = x % 10 ;

      this->revelsed = revelsed * 10 + digit ;
      x = x / 10 ;

    }
    return originalX == this->revelsed;


    }
};

int main(){
  Solution tetst;

if (tetst.isPalindrome(121)) {
  std::cout  << "berhasil;";
}else {
  std::cout << "gagal;";
}

  std::cout << "hasil dari palimodrome : " << tetst.isPalindrome(121) ;
  return 0;
}
