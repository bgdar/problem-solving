#include <iostream>
#include <memory>
#include <string>

// class Mobi
class Mobil {
private:
  std::string nama_mobil;
public:
  Mobil(std::string new_nama_mobil){
    nama_mobil.append(new_nama_mobil);
    std::cout << "nama mobil baru " << new_nama_mobil << " di tambahkan" << std::endl;
  }
  // ini akan di panggil saat class di hapus (demontrasi untuk poiter yg di hapus otomatis)
  ~Mobil(){
    int thisMobil = 0;
    while (this->nama_mobil.length() != 0) {
      this->nama_mobil.pop_back();
      thisMobil += 1;
      std::cout << "nama mobil" << this->nama_mobil[thisMobil] << "di hapus " << std::endl;
    }
    std::cout << "semua data mobil di hapus";
  }

  std::string get_nama_mobil(){
    return this->nama_mobil;
  } 

};


int main () {

  // unigPointer
  std::unique_ptr<Mobil> mobil1 = std::make_unique<Mobil>("arfanza");
  std::cout << "uniqPointer from mobil1" << mobil1->get_nama_mobil() << std::endl; 
  
  // cek mobil1 apakah masih ada
  if (!mobil1) std::cout << "mobil 1 telah di hapus";

  return 0;
}
