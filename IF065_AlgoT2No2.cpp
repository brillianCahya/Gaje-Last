#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    float harga, diskon, bayar;
    int i, temporary;
    int jumlah_digit = 0;

    cout<<"masukkan harga barang > ";
    cin>>harga;

    diskon = harga/10;
    bayar = harga - diskon;
    temporary = harga;

    while(temporary != 0){
        jumlah_digit++;
        temporary /= 10;
    }

    cout<<"\nHarga"<<setw(19)<<"= "<<harga<<"\n";
    cout<<"Diskon 10% "<<"dari harga =  "<<diskon<<"\n";
    cout<<setw(25);

    for(i=0; i<=jumlah_digit+1; i++){
        cout<<"_";
    }
    
    cout<<" _\n\n";
    cout<<"Total Pembayaran"<<setw(8)<<"= "<<bayar;
    getch();
    return 0;
}