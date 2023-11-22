#include <iostream>
using namespace std;

int main(){
//Menampilkan judul program
//Program ini akan menampilkan hasil rata-rata dari 5 nilai masing-masing siswa, serta hasil akhir lulus atau tidak berdasarkan rata-rata nilai tersebut
cout<<"PROGRAM MENGHITUNG NILAI RAPORT SISWA DENGAN ARRAY"<<endl;
//Deklarasi dan inisialisasi array siswa
string siswa[10] = {"Ajeng", "Baco", "Cecep", "Dodi", "Eman", "Fina", "Gius", "Herman",
"Intan", "Jojo"};

//Deklarasi array nilai (dua dimensi) dengan jumlah baris 10 dan kolom 5
//baris menggambarkan kumpulan nilai yang dimiliki setiap siswa, kolom menggambarkan rincian nilai setiap siswa
int nilai[10][5] = {
    {80,98,85,67,80},
    {70,68,87,87,90},
    {70,86,75,92,79},
    {86,78,95,77,100},
    {70,83,75,97,70},
    {90,78,85,95,70},
    {72,78,85,87,75},
    {60,68,75,66,70},
    {80,98,95,100,90},
    {81,94,84,66,82}
};

//inisialisasi variabel rata-rata yang akan menampung rata-rata nilai setiap siswa
double rata_rata = 0;

for(int i = 0;i<10;i++){ //perulangan untuk baris array nilai dengan indeks 0 - 9
int jumlah = 0; //deklarasi variabel jumlah, untuk menjumlahkan semua nilai masing-masing siswa (ini diperlukan untuk mencari nilai rata-rata
    cout<<siswa[i]<<" : "; //menampilkan semua nama pada array siswa
    for(int j = 0;j<5;j++){ //perulangan untuk kolom array nilai dengan indeks 0 - 5
        jumlah+=nilai[i][j]; // menambahkan semua nilai setiap siswa ke dalam variabel jumlah
    }
    rata_rata = jumlah/5; //menghitung rata-rata nilai setiap siswa (karena masih berada di dalam perulangan)
    cout<<"nilai akhir = "<<rata_rata<<" dinyatakan "; //menampilkan rata-rata nilai setiap siswa pada variabel rata_rata
    //kode di bawah ini untuk menentukan kelulusan siswa berdasarkan nilai rata-rata. Nilai 80 atau lebih berarti LULUS
    if(rata_rata>=80){
        cout<<"LULUS"<<endl;
    } else {
        cout<<"TIDAK LULUS"<<endl;
    }
}
return 0;
}
