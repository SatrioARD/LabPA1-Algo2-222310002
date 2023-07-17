#include <iostream>
using namespace std;

class Mahasiswa {
    public :
    virtual void Data (){
        cout <<"Tidak ada data."<<endl;
    }
};

class Satrio : public Mahasiswa{
    public :
    string status = "Aktif";
    string Nama = "Satrio Ardia";
    int Umur = 19;
    string Fakultas = "Informatika";
    string Jurusan = "Teknologi Informasi";
    void Data (){
        cout <<"Status = "<<status<<endl;
        cout <<"Nama = "<<Nama<<endl;
        cout <<"Umur = "<<Umur<<endl;
        cout <<"Fakultas = "<<Fakultas<<endl;
        cout <<"Jurusan = "<<Jurusan<<endl;
    }
};

class Ripal : public Mahasiswa{
    public:
    string status = "Aktif";
    string Nama = "Muhammad Ripaldi";
    int Umur = 19;
    string Fakultas ="Informatika";
    string Jurusan = "Teknologi Informasi";
     void Data (){
        cout <<"Status = "<<status<<endl;
        cout <<"Nama = "<<Nama<<endl;
        cout <<"Umur = "<<Umur<<endl;
        cout <<"Fakultas = "<<Fakultas<<endl;
        cout <<"Jurusan = "<<Jurusan<<endl;
    }
};

int main (){
    Mahasiswa *s1 = new Satrio();
    Mahasiswa *s2 = new Ripal();

    s1 -> Data();
    cout <<"======================================="<<endl;
    s2 -> Data();

    return 0;
}