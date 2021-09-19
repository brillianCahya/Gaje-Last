#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    int ukuran_total, jumlah_baris, i;
    int ukuran_nama = 0;
    int ukuran_nim = 0;
    int ukuran_plug = 0;

    cout<<"..............,,,,,,,,,,,,,,,,,,,,,,..............\n";
    cout<<"              Uji Coba Membuat Tabel\n";
    cout<<"..............,,,,,,,,,,,,,,,,,,,,,,..............\n\n";

    cout<<"Preview tabel adalah seperti ini :\n\n";
    cout<<"==========================\n";
    cout<<"|  NIM  |  Nama  |  Plug |\n";
    cout<<"==========================\n";
    cout<<"\nberapa banyak mahasiswa (baris tabel) yang Anda mau > ";
    cin>>jumlah_baris;
    cin.ignore(1, '\n');

    string nama[jumlah_baris];
    string nim[jumlah_baris];
    string plug[jumlah_baris];

    for(i=0; i<=jumlah_baris-1; i++){
        cout<<"Mahasiswa ke-"<<i+1<<" :\n";
        cout<<"Nama : ";
        getline(cin,nama[i]);
        cout<<"NIM  : ";
        getline(cin,nim[i]);
        cout<<"Plug : ";
        getline(cin,plug[i]);
        cout<<"\n";
    }
    for(i=0; i<=jumlah_baris-1; i++){
        if(nama[i].size()>ukuran_nama){
            ukuran_nama = nama[i].size();
        }
        if(nim[i].size()>ukuran_nim){
            ukuran_nim = nim[i].size();
        }
        if(plug[i].size()>ukuran_plug){
            ukuran_plug = plug[i].size();
        }
    }
    ukuran_total = ukuran_nama+ukuran_nim+ukuran_plug+21;

    for(i=1; i<=ukuran_total; i++){
        cout<<"=";
    }
    cout<<"\n|"<<setw(5)<<"NIM"<<setw(ukuran_nim+1)<<"|"<<setw(6)<<"Nama"<<setw(ukuran_nama+1)<<"|"<<setw(6)<<"Plug"<<setw(ukuran_plug+2)<<"|\n";

    for(i=1; i<=ukuran_total; i++){
        cout<<"=";
    }
    cout<<"\n";
    for(i=0; i<=jumlah_baris-1; i++){
        cout<<"|"<<setw(nim[i].size()+2)<<nim[i]<<setw(ukuran_nim-nim[i].size()+4)<<"|"<<setw(nama[i].size()+2)<<nama[i]<<setw(ukuran_nama-nama[i].size()+5)<<"|"<<setw(plug[i].size()+2)<<plug[i]<<setw(ukuran_plug-plug[i].size()+6)<<"|\n";
    }
    for(i=1; i<=ukuran_total; i++){
        cout<<"=";
    }
    getch();
    return 0;
}