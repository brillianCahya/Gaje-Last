#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    char condition;
    string username, password, user, pass, nmr_trans, date, nama, plh, id_member, choice, choice2,
    harga[]={"Rp 50.500,-","Rp 16.000,-","Rp 25.000,-","Rp 30.000,-","Rp 3.000,-"},
    pilih[]={"001","002","003","004","005"},
    produk[]={"Paracetamol 500mg","Amoxilin","Combantrin","Tolak Angin/box","Mixagrip"};
    int i, cost, diskon, bayar, kembali, total_rega, total_bayar, jumlah_item;

    cout<<"============================================================\n"
        <<"||                CREATE YOUR ADMIN ACCOUNT               ||\n"
        <<"============================================================\n";
    cout<<"Username : ";
    getline(cin, username);
    cout<<"Password : ";
    getline(cin, password);

    cout<<"============================================================\n"
        <<"||                       MEDICALOGY                       ||\n"
        <<"||                    << LOGIN ADMIN >>                   ||\n"
        <<"============================================================\n";
    cout<<"Username : ";
    getline(cin,user);
    cout<<"Password : ";
    getline(cin,pass);

    while(user != username || pass != password){
        cout<<"----------------------- Login Failed ----------------------\n";
        cout<<"---------------- Wrong Username or Password ---------------\n\n";
        cout<<"--------------------Please Log-In Again--------------------\n";
        cout<<"Username : ";
        getline(cin, user);
        cout<<"Password : ";
        getline(cin, pass);
    }
    cout<<"----------------------- Login Success ---------------------\n\n";

    do{
    cout<<"============================================================\n"
        <<"||                      SISTEM KASIR                      ||\n"
        <<"||                       MEDICALOGY                       ||\n"
        <<"============================================================\n";

    cout<<"Nomor Transaksi"<<setw(11)<<": ";
    cin>>nmr_trans;
    cout<<"Tanggal Transaksi"<<setw(9)<<": ";
    getline(cin>>ws, date);
    cout<<"Nama Pembeli"<<setw(14)<<": ";
    getline(cin,nama);
    cout<<"\n";

    do{
        for(i=0; i<=4; i++){
            cout<<pilih[i]<<setw(6)<<"| "<<produk[i]<<setw(24-produk[i].size())<<"| "<<harga[i]<<"\n";
        }
        cout<<"\nKode Produk"<<setw(15)<<": ";
        cin>>plh;

        if(plh == "001"){
            choice = produk[0];
            choice2 = harga[0];
            cost = 50500;
            cout<<"Produk Medis"<<setw(14)<<": "<<produk[0]<<"\n"
                <<"Harga Produk"<<setw(14)<<": "<<harga[0]<<"\n";
        }
        else if(plh == "002"){
            choice = produk[1];
            choice2 = harga[1];
            cost = 16000;
            cout<<"Produk Medis"<<setw(14)<<": "<<produk[1]<<"\n"
                <<"Harga Produk"<<setw(14)<<": "<<harga[1]<<"\n";
        }
        else if(plh == "003"){
            choice = produk[2];
            choice2 = harga[2];
            cost = 25000;
            cout<<"Produk Medis"<<setw(14)<<": "<<produk[2]<<"\n"
                <<"Harga Produk"<<setw(14)<<": "<<harga[2]<<"\n";
        }
        else if(plh == "004"){
            choice = produk[3];
            choice2 = harga[3];
            cost = 30000;
            cout<<"Produk Medis"<<setw(14)<<": "<<produk[3]<<"\n"
                <<"Harga Produk"<<setw(14)<<": "<<harga[3]<<"\n";
        }
        else if(plh == "005"){
            choice = produk[4];
            choice2 = harga[4];
            cost = 3000;
            cout<<"Produk Medis"<<setw(14)<<": "<<produk[4]<<"\n"
                <<"Harga Produk"<<setw(14)<<": "<<harga[4]<<"\n";
        }
        else{
            cout<<"\nKode Produk TIDAK Ditemukan !\n\n";
        }
    }
    while(plh !="001" && plh !="002" && plh !="003" && plh !="004" && plh !="005");

    cout<<"Jumlah Produk"<<setw(13)<<": ";
    cin>>jumlah_item;
    total_rega = jumlah_item*cost;
    cout<<"Total Harga"<<setw(15)<<": "<<total_rega<<"\n\n";

    do{
        cout<<"Ada kartu member?\n" 
            <<"(press \"y\" or \"n\")"<<setw(8)<<": ";
        condition = getche();
    }
    while(condition != 'y' && condition != 'n'); 

    cout<<"\n";

    if(condition == 'y'){
        cout<<"ID Member"<<setw(17)<<": ";
        cin>>id_member;
        if(total_rega >= 350000){
            diskon = 15*total_rega/100;
        }
    }
    else{
        if(total_rega >= 350000){
            diskon = 5*total_rega/100;
        }      
    }

    cout<<"Diskon"<<setw(20)<<": "<<diskon<<"\n";
    total_bayar = total_rega - diskon;
    cout<<"Total Bayar"<<setw(15)<<": "<<total_bayar<<"\n";
    cout<<"Bayar"<<setw(21)<<": ";
    cin>>bayar;
    kembali = bayar - total_bayar;
    cout<<"Kembali"<<setw(19)<<": "<<kembali<<"\n\n";

    cout<<"------------------------------------------------------------\n"
        <<"                       NOTA PEMBELIAN\n"
        <<"------------------------------------------------------------\n";
    
    cout<<"Nomor Transaksi"<<setw(11)<<": "<<nmr_trans<<"\n"
        <<"Tanggal Transaksi"<<setw(9)<<": "<<date<<"\n"
        <<"Nama Pembeli"<<setw(14)<<": "<<nama<<"\n"
        <<"Kode Produk"<<setw(15)<<": "<<plh<<"\n"
        <<"Produk Medis"<<setw(14)<<": "<<choice<<"\n"
        <<"Harga Produk"<<setw(14)<<": "<<choice2<<"\n"
        <<"Jumlah Produk"<<setw(13)<<": "<<jumlah_item<<"\n"
        <<"Total Harga"<<setw(15)<<": "<<total_rega<<"\n"
        <<"ID Member"<<setw(17)<<": "<<id_member<<"\n"
        <<"Diskon"<<setw(20)<<": "<<diskon<<"\n"
        <<"Total Bayar"<<setw(15)<<": "<<total_bayar<<"\n"
        <<"Kembali"<<setw(19)<<": "<<kembali<<"\n"
        <<"------------------------------------------------------------\n";

    cout<<"Ulangi transaksi?\n"
        <<"(press\"y\" or \"n\")"<<setw(9)<<": ";
    condition = getche();
    cout<<"\n";
    }
    while(condition != 'n');
    cout<<"======================= TERIMA KASIH =======================\n";

    return 0;
}