#include <iostream>
using namespace std;

class Perpustakaan {
protected:
  string buku = "Percy Jakcson";
  string nama = "Fadlan";

public:
  string cekPinjaman() {
    return "Buku Percy Jackson telah dipinjam oleh Fadlan";
  }
};

class Pengembalian : public Perpustakaan {
protected:
  string pengembalian = "Telah di kembalikan";

public:
  string cekKembali() {
    return "Buku Percy Jackson telah di kembalikan oleh Fadlan ";
  }
};


int main() {
  Pengembalian bukuPerpustakaan;

  cout << bukuPerpustakaan.cekPinjaman() << endl;
  cout << bukuPerpustakaan.cekKembali() << endl;

  return 0;
}