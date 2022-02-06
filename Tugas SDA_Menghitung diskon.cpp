#include <iostream>

using namespace std;

int main(){
  float harga, diskon,potongan, total;

  cout << "Tugas SDA_Prodi Informatika\n" ;
  cout << "Menghitung diskon\n";

  
  cout << "===============================\n";
  cout << "Masukkan jumlah harga \t\t: ";
  cin >> harga;
  cout << "Masukkan diskon (%) \t\t: ";
  cin >> diskon;
  cout << "===============================\n";
  
  
  potongan = (diskon/100)*harga;
  total = harga-potongan;
  
  cout << "Harga asli \t\t\t: " << harga << endl;
  cout << "Potongan kena diskon \t\t: " << potongan << endl;
  cout << "Total uang yang harus bayar \t: " << total << endl;

}
