#include <iostream>
using namespace std;
 int main (){
     char tampilkan[1];
    char nama[50], alamat[50], NIM[50];
    cout<< "Memasukan Data Diri" << endl;

    cout<<"Nama : ";
    cin.getline(nama,50);

    cout<<"Alamat :";
    cin.getline(alamat,50);

    cout<<"NIM :";
    cin.getline(NIM,50);

    cout<<"Menampilkan Data Diri"<<endl;
    cout<<"Nama :";
    cout<<nama<<endl;
    cout<<"Alamat :";
    cout<<alamat<<endl;
    cout<<"NIM :";
    cout<<NIM<<endl;

    return 0;
 }
