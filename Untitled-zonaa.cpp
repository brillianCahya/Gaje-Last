#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char kondisi;

    cout<<"=======================================================\n";
    cout<<"     Program Klasterisasi Zona Penyebaran Covid-19\n";
    cout<<"=======================================================\n";
    cout<<"1. Suatu daerah dikatakan \"zona hitam\" jika \n"
           <<"   terdapat kasus positif Covid-19 dan "
           <<"diiringi kasus kematian akibat Covid-19\n";

    cout<<"2. Suatu daerah dikatakan \"zona merah\" jika \n"
           <<"   terdapat kasus positif Covid-19, tetapi "
           <<"tidak diiringi kasus kematian akibat Covid-19\n";

    cout<<"3. Suatu daerah dikatakan \"zona oranye\" jika \n"
           <<"   tidak terdapat kasus positif Covid-19, tetapi "
           <<"terdapat ODP\n";

    cout<<"4. Suatu daerah dikatakan \"zona hijau\" jika \n"
           <<"   tidak terdapat kasus positif Covid-19 dan "
           <<"tidak terdapat ODP";

    do{
        cout<<"\n\nApakah di kelurahan Anda terdapat kasus positif Covid-19 ?\n"
            <<"(tekan y jika iya, tekan t jika tidak) Jawab > ";
        kondisi = getche();
    }
    while(kondisi != 'y' && kondisi != 't');

    if( kondisi == 'y'){
        do{
            cout<<"\n\nApakah terdapat kasus kematian akibat Covid-19 ?\n"
                <<"(tekan y jika iya, tekan t jika tidak) Jawab > ";
            kondisi = getche();
        }
        while(kondisi != 'y' && kondisi != 't');
        cout<<"\n\n";

        if(kondisi == 'y'){
            cout<<"Kelurahan Anda tergolong \"Zona Hitam\"";
        }
        else{
            cout<<"Kelurahan Anda tergolong \"Zona Merah\"";
        }
    }
    else{
        do{
            cout<<"\n\nApakah terdapat ODP ?\n"
                <<"(tekan y jika iya, tekan t jika tidak) Jawab > ";
            kondisi = getche();
        }
        while(kondisi != 'y' && kondisi != 't');
        cout<<"\n\n";

        if(kondisi == 'y'){
            cout<<"Kelurahan Anda tergolong \"Zona Oranye\"";
        }
        else{
            cout<<"Kelurahan Anda tergolong \"Zona Hijau\"";
        }
    }
    getch();
    return 0;
}