#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int angka, satuan, puluhan;
    string tls;

    cout<<"program meng-HURUF-kan ANGKA dari 1-99\n";
    cout<<"----------------------------------\n";
    cout<<"masukkan angka (1-99) > ";
    cin>>angka;

    if(angka>0){
    satuan = angka % 10;
    puluhan = angka/10;

    switch (satuan){
        case 0 :
            tls=" ";
            break;
        case 1 :
           tls="satu";
            break;
        case 2 :
            tls="dua";
            break;
        case 3 : 
            tls="tiga";
            break;
        case 4 :
            tls="empat";
            break;
        case 5 :
            tls="lima";
            break;
        case 6 :
            tls="enam";
            break;
        case 7:
            tls="tujuh";
            break;
        case 8 :
            tls="delapan";
            break;
        case 9 :
            tls="sembilan";
            break;
    }
    switch (puluhan){
        case 0 :
            cout<<tls;
            break;
        case 1 :
        switch (satuan){
            case 0 :
                cout<<"sepuluh";
                break;
            case 1 :
                cout<<"sebelas";
                break;
            default :
                cout<<tls<<" belas";
                break;
        }
            break;
        case 2 :
            cout<<"dua puluh "<<tls;
            break;
        case 3 :
            cout<<"tiga puluh "<<tls;
            break;
        case 4 : 
            cout<<"empat puluh "<<tls;
            break;
        case 5 :
            cout<<"lima puluh "<<tls;
            break;
        case 6 :
            cout<<"enam puluh "<<tls;
            break;
        case 7 :
            cout<<"tujuh puluh "<<tls;
            break;
        case 8 :
            cout<<"delapan puluh "<<tls;
            break;
        case 9 :
            cout<<"sembilan puluh "<<tls;
            break;
        default :
            cout<<"mohon angkanya 1-99 !!!";
            break;
    }
    }
    else if(angka==0){
        cout<<"nol";
    }
    else{
        cout<<"mohon angkanya 1-99 !!!";
    }
    getch();
    return 0;
}