#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void pilihOperasi(){
    cout<<"======= PROGRAM KALKULATOR ======="<<endl;
    cout<<"Pilih operasi : "<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Keluar"<<endl;
}


double penjumlahan(double angka1,double angka2){
    return angka1+angka2;
}

double pengurangan(double angka1,double angka2){
    return angka1-angka2;
}

double perkalian(double angka1,double angka2){
    return angka1*angka2;
}

double pembagian(double angka1,double angka2){
    return angka1/angka2;
}

int main(){
double x,y;
int pilih;
do{

pilihOperasi();


cout<<"Masukkan pilihan (1-5) : ";
cin>>pilih;


switch(pilih){
case 1:
    cout<<"Masukkan angka pertama : ";
    cin>>x;
    cout<<"Masukkan angka kedua : ";
    cin>>y;
    cout<<penjumlahan(x,y)<<endl;
    break;
case 2:
    cout<<"Masukkan angka pertama : ";
    cin>>x;
    cout<<"Masukkan angka kedua : ";
    cin>>y;
    cout<<pengurangan(x,y)<<endl;
    break;
case 3:
    cout<<"Masukkan angka pertama : ";
    cin>>x;
    cout<<"Masukkan angka kedua : ";
    cin>>y;
    cout<<perkalian(x,y)<<endl;
    break;
case 4:
    cout<<"Masukkan angka pertama : ";
    cin>>x;
    cout<<"Masukkan angka kedua : ";
    cin>>y;
    cout<<pembagian(x,y)<<endl;
    break;
case 5:
    cout<<"Program berhenti";
    break;
default:
    cout<<"Input tidak valid"<<endl;
    break;
}

getch();
system("cls");

} while (pilih!=5);



return 0;
}
