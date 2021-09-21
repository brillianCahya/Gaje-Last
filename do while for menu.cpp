#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    const float phi = 3.14;
    int chois, l;
    float jr, p, t;
    char next;

    do{
        cout<<"1. Luas Lingkaran\n";
        cout<<"2. Luas Persegi\n";
        cout<<"3. Luas Persegi Panjang\n";
        cout<<"4. Luas Segitiga\n\n";
        
        cout<<"pilihan Anda > ";
        cin>>chois;
        cout<<"\n--------------------------------------\n";

        switch(chois){
            case 1:
                cout<<"Anda memilih Luas Lingkaran\n";
                cout<<"masukkan jari-jari > ";
                cin>>jr;
                cout<<"Luas Lingkaran = "<<phi*jr*jr;
                break;
            case 2:
                cout<<"Anda memilih Luas Persegi\n";
                cout<<"masukkan panjang persegi > ";
                cin>>p;
                cout<<"Luas Persegi = "<<p*p;
                break;
            case 3:
                cout<<"Anda memilih Luas Persegi Panjang\n";
                cout<<"masukkan panjang > ";
                cin>>p;
                cout<<"masukkan lebar > ";
                cin>>l;
                cout<<"Luas Persegi Panjang = "<<p*l;
                break;
            case 4:
                cout<<"Anda memilih Luas Segitiga\n";
                cout<<"masukkan panjang alasnya > ";
                cin>>p;
                cout<<"masukkan tingginya > ";
                cin>>t;
                cout<<"luas segitiga = "<<p*t/2;
                break;
            default:
                cout<<"kode anda tidak ada di pilihan!!!";
        }
        cout<<"\ningin kembali ke menu?(tekan \"t\" jika tidak) > ";
        next=getch();
        cout<<"\n";
    }
    while(next!='t');
    cout<<"terima kasihh....";
    getch();
    return 0;
}