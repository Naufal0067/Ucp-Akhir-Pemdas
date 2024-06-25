/**
 * @mainpage Matakuliah
 * 
 * @section intro_sec Pendahuluan
 * Program untuk menggambarkan sistem perusahaan karyawan dengan proyek
 * 
 * @section note_sec Struktur Program
 * Program ini terdiri dari 2 kelas utama:
 * - \b karyawan: menangani informasi tentang karyawan
 * - \b proyek: menangani informasi tentang proyek
 *
 */

 
 
 /**  @file uas_0067.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-06-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <iostream>
using namespace std;

class MataKuliah
{
private: // isi dengan access modifier yang dibutuhkan
 float presensi;
 float activity;
 float exercise;
 float tugasakhir;
 
 
 // tambahkan dengan variabel lain yang dibutuhkan dibawah ini
public:
    void setMataKuliah(int i, float value)
{
  presensi = 0.0;
  activity = 0.0;
  exercise = 0.0;
  tugasakhir = 0.0;
 // isi dengan inisialisasi variabel yang dibutuhkan dibawah ini
}
    float getMataKuliah(int i) {
    return mataKuliah[i];
}
virtual void namaMataKuliah() { return; }
virtual void inputNilai() { return; }
virtual void hitungNilaiAkhir() { return; }
virtual void cekKelulusan() { return;}
// tambahkan virtual fungsi lain yang dibutuhkan dibawah ini
void setPresensi(float nilai)
{
 this->presensi = nilai;
}
float getPresensi()
{
 return presensi;
}
// tambahkan setter dan getter lain yang dibutuhkan dibawah ini
void setActivity(float nilai)
{
 this->activity = nilai;
}
float getActivity()
{
 return activity;
}
void setExercise(float nilai)
{
 this->exercise= nilai;
}
float getExercise()
{
 return exercise;
}
void setTugasAkhir(float nilai)
{
 this->tugasakhir = nilai;
}
float getTugasAkhir()
{
 return tugasakhir;
}
};
class Pemrograman : public MataKuliah
{
    public: 
        void inputNilai() {
            cout << "Masukkan nilai presensi" << endl;
            cout << "Masukkan nilai activity" << endl;
            cout << "Masukkan nilai exercise" << endl;
            cout << "Masukkan nilai tugas akhir" << endl;
        }
        void hitungNilaiAkhir() {
            cout << "Nilai akhir: " << endl;
        }
        void cekKelulusan() {
            cout << "Dinyatakan lulus" << endl;
            cout << "Dinyatakan tidak lulus" << endl;
        }
 // isi disini untuk mengisi kelas pemrograman
};
class Jaringan : public MataKuliah
{
    public: 
        void inputNilai() {
            cout << "Masukkan nilai activity" << endl;
            cout << "Masukkan nilai exercise" << endl; 
        }
 // isi disini untuk mengisi kelas jaringan
};
int main()
{
 char pilih;
 MataKuliah *mataKuliah;
 Pemrograman pemrograman;
 Jaringan jaringan;
 
 MataKuliah mataKuliah;

    mataKuliah.setMataKuliah1("Memilih Pemrograman");
    matakuliah.setMataKuliah2("Memilih jaringan");
    matakuliah.setMataKuliah3("Keluar");

    cout << mataKuliah.getMataKuliah(1) << endl;
    cout << mataKuliah.getMataKuliah(2) << endl;
    cout << matakuliah.getMataKuliah(3) << endl;

    return 0;

  // isi disini untuk menentukan mata kuliah yang dipilih
}