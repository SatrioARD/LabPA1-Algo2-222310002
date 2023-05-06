#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

const int N = 100;
string buku[N];

int binarySearch(string x, int l, int r) {
  if (r >= l) {
    int mid = l + (r - l) / 2;
    if (buku[mid] == x)
      return mid;
    if (buku[mid] > x)
      return binarySearch(x, l, mid - 1);
    return binarySearch(x, mid + 1, r);
  }
  return -1;
}
int main() {
  int n;
  cout << "===PROGRAM PERPUSTAKAAN DENGAN BINARY SEARCH===" << endl;
  cout << "\nMasukan Jumlah Buku : ";
  cin >> n;
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << "Masukan Judul Buku ke-" << i + 1 << " : ";
    cin >> buku[i];
  }
  cout << endl << "Daftar Buku Yang Tersedia Di Rak : " << endl;
  for (int i = 0; i < n; i++) {
    cout << "Rak " << i + 1 << " : " << buku[i] << endl;
  }
  sort(buku, buku + n);
  string x;
  cout << "\nMasukkan Judul Buku Yang Dicari : ";
  cin >> x;
  int hasil = binarySearch(x, 0, n - 1);
  if (hasil == -1)
    cout << "\nJudul Buku Tidak Ditemukan" << endl;
  else
    cout << "\nBuku Tersebut Berada Pada Rak ke-" << hasil + 1 << endl;

  return 0;
}