#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main()
{
    string instansi[] = {"PAUD", "SD", "SMP", "SMA", "Perguruan Tinggi"};
    unsigned long long int temporary, total, biaya[5];
    int i, digit, jml_siswa[5], jml_pengajar[5];
    int jatah_siswa[] = {20, 35, 35, 35, 50};
    int jatah_pengajar[] = {42, 42, 42, 42, 50};
    

    cout<<"==================================================\n";
    cout<<"        Program Hitung Biaya Bantuan Kuota\n";
    cout<<"==================================================\n";

    cout<<"Rincian jatah\n";
    cout<<"--------------\n";
    cout<<"a. Siswa PAUD : 20 GB\n"
        <<"b. Siswa SD   : 35 GB\n"
        <<"c. Siswa SMP  : 35 GB\n"
        <<"d. Siswa SMA  : 35 GB\n"
        <<"e. Mahasiswa  : 50 GB\n"
        <<"f. Dosen      : 50 GB\n"
        <<"g. Pengajar PAUD - SMA : 42 GB\n";
    cout<<"   (press any key)";
    getch();
    
    cout<<"\n\nInput\n";
    cout<<"------";
    
    for(i=0; i<=3; i++){
        cout<<"\n"<<instansi[i]<<"\n";
        cout<<"Jumlah Siswa    : ";
        cin>>jml_siswa[i];
        cout<<"Jumlah Pengajar : ";
        cin>>jml_pengajar[i];
        
        biaya[i] = (jml_siswa[i]*jatah_siswa[i] + jml_pengajar[i]*jatah_pengajar[i])*6000ull;
    }
        cout<<"\n"<<instansi[4]<<"\n";
        cout<<"Jumlah Mahasiswa : ";
        cin>>jml_siswa[4];
        cout<<"Jumlah Dosen     : ";
        cin>>jml_pengajar[4];
        biaya[4] = (jml_siswa[4]*jatah_siswa[4] + jml_pengajar[4]*jatah_pengajar[4])*6000ull;
        cout<<"\n";

    for(i=0; i<=4; i++){
        total += biaya[i];
    }
    temporary = total;

    while(temporary != 0){
        digit++;
        temporary /= 10;
    }
    cout<<"Rekap Tabel\n";
    cout<<"------------\n";

    for(i=1; i<=57+digit; i++){
        cout<<"=";
    }
    cout<<"\n|"<<setw(13)<<"Instansi"<<setw(6)<<"|"<<" Jumlah Pengajar |"
        <<" Jumlah Siswa |"<<setw(7)<<"Biaya"<<setw(digit-2)<<"|\n";

    for(i=1; i<=57+digit; i++){
        cout<<"=";
    }
    for(i=0; i<=4; i++){
        cout<<"\n| "<<instansi[i]<<setw(18-instansi[i].size())<<" |"<<setw(15)<<jml_pengajar[i]
            <<"  |"<<setw(12)<<jml_siswa[i]<<"  |"<<setw(digit+1)<<biaya[i]<<"  |";
    }
    cout<<"\n";
    for(i=1; i<=57+digit; i++){
        cout<<"-";
    }
    cout<<"\n|"<<setw(31)<<"Total Biaya"<<setw(19)<<"Rp "<<total<<",00"<<"  |\n";   

     for(i=1; i<=57+digit; i++){
        cout<<"-";
    }
    getch();
    return 0;   
}