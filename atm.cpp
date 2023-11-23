#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

double saldo = 0.0;
int salah = 0;

//PIN yang bisa digunakan
string PIN[10] = {"123456"};

bool cekPIN(string pin){
    for(int i = 0;i<10;i++){
        if(pin == PIN[i]){
            return true;
        }
    }
}

void menuATM(){
    cout<<"===== PROGRAM ATM====="<<endl;
    cout<<"Pilih opsi perintah : "<<endl;
    cout<<"1. Cek Saldo"<<endl;
    cout<<"2. Setor Uang"<<endl;
    cout<<"3. Tarik Uang"<<endl;
    cout<<"4. Keluar"<<endl;
}

void cekSaldo(){
    cout<<"Saldo anda saat ini adalah "<<saldo<<endl;
}

void setorUang(){
    double uang;
    cout<<"Masukkan uang yang akan disetor : ";
    cin>>uang;
    saldo += uang;
    cout<<"Saldo Anda saat ini adalah sebesar Rp. "<<saldo<<endl;
}

void tarikUang(){
    double tarik;
    cout<<"Masukkan jumlah uang yang akan ditarik ";
    cin>>tarik;
    if(tarik>saldo){
        cout<<"Saldo anda tidak mencukupi!"<<endl;
    } else {
        saldo -= tarik;
        //saldo = saldo - tarik
        cout<<"Saldo anda saat ini adalah "<<saldo<<endl;
    }
}

int main(){

int pilihan;
string pin_user;
ulang:
cout<<"Masukkan pin : "; cin>>pin_user;

if(cekPIN(pin_user)){

do{

menuATM();

cout<<"Masukkan pilihan ";
cin>>pilihan;

switch(pilihan){
case 1:
    cekSaldo();
    break;
case 2:
    setorUang();
    break;
case 3:
    tarikUang();
    break;
case 4:
    break;
default:
    cout<<"Inputan anda tidak valid"<<endl;
    break;
}

getch();
system("cls");

} while (pilihan != 4);

} else {
    cout<<"Pin anda salah!"<<endl;
    salah++;
    if(salah>=5){
        cout<<"Anda telah salah sebanyak 5 kali, lakukan lagi nanti"<<endl;
        exit(EXIT_SUCCESS);
    }
    goto ulang;
}


return 0;
}
