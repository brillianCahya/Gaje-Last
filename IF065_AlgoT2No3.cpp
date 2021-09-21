#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    string nama[3];
    int i, total, total_item, harga[3], jumlah[3], subtotal[3];

    cout<<"==================================================\n";
    cout<<"    -------- Program Pembelian Barang --------\n";
    cout<<"==================================================\n";
    
    for(i=0; i<=2; i++){
        cout<<"Barang #"<<i+1<<"\n";
        cout<<"Nama          : ";
        getline(cin, nama[i]);
        cout<<"Jumlah        : ";
        cin>>jumlah[i];
        cout<<"Harga Satuan  : ";
        cin>>harga[i];
        cin.ignore(1, '\n');
        cout<<"\n";

        subtotal[i] = harga[i]*jumlah[i];
        total_item += jumlah[i];
        total += subtotal[i];
        
    }
    cout<<"Rekap Tabel :\n";

    for(i=1; i<=73; i++){
        cout<<"-";
    }
    cout<<"\n| No |"<<setw(13)<<"Nama Barang"<<setw(12)<<"|"<<setw(11)<<"Jumlah  |"<<setw(17)<<"Harga Satuan  |"<<setw(15)<<"Sub Total  |\n";
    for (i=1; i<=73; i++){
        cout<<"-";
    }
    cout<<"\n";
    for(i=0; i<=2; i++){
        cout<<"| "<<i+1<<"  |"<<setw(nama[i].size()+2)<<nama[i]<<setw(23-nama[i].size())<<"|"<<setw(8)<<jumlah[i]<<"  |"<<setw(14)<<harga[i]<<"  |"<<setw(11)<<subtotal[i]<<"  |\n";
    }
    for (i=1; i<=73; i++){
        cout<<"-";
    }
    cout<<"\n";
    cout<<"|"<<setw(17)<<"Total"<<setw(13)<<"|"<<setw(8)<<total_item<<setw(3)<<"|"<<setw(28)<<total<<setw(4)<<"|\n";
    for (i=1; i<=73; i++){
        cout<<"-";
    }
    getch();
    return 0;
}