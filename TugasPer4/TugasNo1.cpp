#include <iostream>
using namespace std;
const int MAX = 10;

class CircularQueue {
private:
  int front;
  int rear;
  int arr[MAX];

public:
  CircularQueue() {
    front = -1;
    rear = -1;
  }

  bool isFull() {
    if ((front == 0 && rear == MAX - 1) || front == rear + 1) {
      return true;
    }
    return false;
  }

  bool isEmpty() {
    if (front == -1) {
      return true;
    }
    return false;
  }

  void enqueue(int data) {
    if (isFull()) {
      cout << " Maaf Antrian Penuh, Tidak Dapat Menambahkan Tiket." << endl;
    } else {
      if (front == -1) {
        front = 0;
      }
      rear = (rear + 1) % MAX;
      arr[rear] = data;
      cout << "\nTiket Berhasil Ditambahkan ke Dalam Antrian" << endl;
    }
  }

  void dequeue() {
    if (isEmpty()) {
      cout << "Antrian Kosong, Tidak Ada Tiket Yang Dapat Diambil" << endl;
    } else {
      cout << "Tiket Nomor " << arr[front] << " Telah Diambil" << endl;
      if (front == rear) {
        front = -1;
        rear = -1;
      } else {
        front = (front + 1) % MAX;
      }
    }
  }

  void display() {
    if (isEmpty()) {
      cout << "Antrian /kosong." << endl;
    } else {
      cout << "Isi Antrian: ";
      int i;
      for (i = front; i != rear; i = (i + 1) % MAX) {
        cout << arr[i] << " ";
      }
      cout << arr[i] << endl;
    }
  }
};

int main() {
  CircularQueue q;
  int pilihan, nomor;
  cout << "\nPROGRAM C++ ANTRIAN TIKET DENGAN CIRCULAR QUEUE" << endl;
  do {
    cout << "\n\n==== MENU ANTRIAN TIKET ====" << endl;
    cout << "============================" << endl;
    cout << "|1. Tambah Tiket           |" << endl;
    cout << "|2. Ambil Tiket            |" << endl;
    cout << "|3. Lihat Antrian          |" << endl;
    cout << "|4. Keluar                 |" << endl;
    cout << "============================" << endl;
    cout << "\nMasukan Pilihan : ";
    cin >> pilihan;
    switch (pilihan) {
    case 1:
      cout << "Masukkan Nomor Tiket: ";
      cin >> nomor;
      q.enqueue(nomor);
      break;
    case 2:
      q.dequeue();
      break;
    case 3:
      q.display();
      break;
    case 4:
      cout << "\nTerimaKasih" << endl;
      break;
    default:
      cout << "Pilihan Tidak Valid" << endl;
      break;
    }
  } while (pilihan != 4);
  return 0;
}