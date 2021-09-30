#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    string nama;
    bool conditional = true;
    float ipk;
    int i, lama_studi, lama_asisten, mka, jenis_publikasi, banyak_publikasi, score;

    cout<<"============================================\n"
        <<"       Program Seleksi Karya Cendekia\n"
        <<"============================================\n";

    cout<<"input\n";
    cout<<"-----\n";
    cout<<"Nama Mahasiswa "<<setw(19)<<": ";
    getline(cin, nama);
    cout<<"IPK"<<setw(31)<<": ";
    cin>>ipk;
    cout<<"Lama Studi (semester)"<<setw(13)<<": ";
    cin>>lama_studi;
    cout<<"Lama Menjadi Asisten (semester)"<<setw(3)<<": ";
    cin>>lama_asisten;
    cout<<"Banyaknya MKA Praktikum"<<setw(11)<<": ";
    cin>>mka;
    cout<<"Jenis Publikasi,\n"
        <<"input [1] untuk upn\n"
        <<"input [2] untuk regional\n"
        <<"input [3] untuk nasional\n"
        <<"input [4] untuk internasional\n"
        <<"input [0] untuk tidak pernah\n"
        <<"Input"<<setw(30)<<": ";
    cin>>jenis_publikasi;

    for(i=1; i<=4; i++){
    if (jenis_publikasi == i){
        cout<<"Banyaknya Publikasi "<<setw(15)<<": ";
        cin>>banyak_publikasi;
        break;
    }
    }

    for(i=0; i<=4; i++){
    if (jenis_publikasi == i){
        conditional = false;

        for (i=1; i<=59+nama.size(); i++){
        cout<<"-";
        }

    if (ipk >= 3.5 && lama_studi <=10 && (lama_asisten > 0 || jenis_publikasi != 0)){

        if(ipk >= 3.500 && ipk <= 3.625){
            score += 20;
        }
        else if(ipk >= 3.626 && ipk <= 3.750){
            score += 40;
        }
        else if(ipk >= 3.751 && ipk <= 3.875){
            score += 60;
        }
        else{
            score += 80;
        }

        if(lama_studi == 10){
            score += 10;
        }
        else if(lama_studi == 9){
            score += 20;
        }
        else if(lama_studi == 8){
            score += 30;
        }
        else{
            score += 40;
        }

        if(lama_asisten == 1){
            score += 10*mka;
        }
        if(lama_asisten == 2){
            score += 20*mka;
        }
        if(lama_asisten == 3){
            score += 30*mka;
        }
        else{
            score += 40*mka;
        }

        if(jenis_publikasi == 1){
            score += 10*banyak_publikasi;
        }
        else if(jenis_publikasi == 2){
            score += 20*banyak_publikasi;
        }
        else if(jenis_publikasi == 3){
            score += 30*banyak_publikasi;
        }
        else if(jenis_publikasi == 4){
            score += 40*banyak_publikasi;
        }

        cout<<"\nMahasiswa atas nama \""<<nama<<"\" berhak mendapat Karya Cendekia\n";
        cout<<"Jumlah Skor = "<<score;
    }
    else{
        cout<<"\nMahasiswa atas nama \""<<nama<<"\" TIDAK berhak mendapat Karya Cendekia";
    }
        break;
    }    
    }
    if (conditional){
        cout<<"\n!!! Input yang Anda Masukkan SALAH !!!";
    }
    getch();
    return 0;
}