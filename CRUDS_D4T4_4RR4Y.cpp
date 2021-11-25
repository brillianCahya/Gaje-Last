#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void getOption(int &pilihan);
void tampilData(int sizeAry, string nama[], int umur[], string alamat[], string prodi[]);
void tambahData(int &sizeAry, string nama[], int umur[], string alamat[], string prodi[]);
void hapusData(int &sizeAry, string nama[], int umur[], string alamat[], string prodi[]);
void ubahData(int sizeAry, string nama[], int umur[], string alamat[], string prodi[]);
void cariData(int sizeAry, string nama[], int umur[], string alamat[], string prodi[]);

int main()
{
    string 
        nama[20] = {"Aku"},
        alamat[20] = {"Kebumen"},
        prodi[20] = {"Komputasi"};

    int pilihan,
        sizeAry = 1, 
        umur[20] = {19};
    
    enum choice {TAMPIL = 1, TAMBAH, UBAH, HAPUS, CARI, SELESAI};

    cout << "==========================================================\n" 
         << "|           Program  C R U D S  Data Mahasiswa           |\n"
         << "==========================================================\n"
         << "* with maximum row (baris) = 20\n";
    
    do{
    getOption(pilihan);

    switch(pilihan)
    {
        case TAMPIL :
            cout << "\nTampilan Data (TABEL) :\n";
            tampilData(sizeAry, nama, umur, alamat, prodi);
            break;
        case TAMBAH :
            tambahData(sizeAry, nama, umur, alamat, prodi);
            break;
        case UBAH :
            ubahData(sizeAry, nama, umur, alamat, prodi);
            break;
        case HAPUS :
            hapusData(sizeAry, nama, umur, alamat, prodi);
            break;
        case CARI :
            cariData(sizeAry, nama, umur, alamat, prodi);
            break;
        case SELESAI :
            cout << "Terima kasih atas kunjungan Anda...";
            break;
        default :
            cout << "Pilihan TIDAK ditemukan !!\n";
    }
    } while(pilihan != SELESAI);

    return 0;
}

void getOption(int &pilihan)
{
    cout << "\n1-TAMPILKAN Data\n"
         << "2-TAMBAHKAN Data\n"
         << "3-UBAH Data\n"
         << "4-HAPUS Data\n"
         << "5-CARI Data\n"
         << "6-SELESAI\n"
         << "----------------\n"
         << "Select Option > ";
    cin >> pilihan;
    cin.ignore(); 
}

void tampilData(int sizeAry, string nama[], int umur[], string alamat[], string prodi[])
{
    int sepuh, jmlDigit, dgtNama = 4, dgtUmur = 4, dgtAlamat = 6, dgtProdi = 5;

    for(int i=0; i<sizeAry; i++){
        
        if(nama[i].size() > dgtNama){
            dgtNama = nama[i].size();
        }
        if(umur[i] > 9999){
            sepuh = umur[i];
        }
        if(alamat[i].size() > dgtAlamat){
            dgtAlamat = alamat[i].size();
        }
        if(prodi[i].size() > dgtProdi){
            dgtProdi = prodi[i].size();
        }
    }
    sepuh /= 10000;
    while(sepuh != 0){
        sepuh /= 10;
        dgtUmur++;
    }
    jmlDigit = dgtNama + dgtUmur + dgtAlamat + dgtProdi + 25;

    for(int i=0; i<jmlDigit; i++){
        cout << "=";
    }
    cout << "\n"
         << "| " << left << setw(3) << "No" << "| " << setw(dgtNama+3) << "Nama"
         << "| " << setw(dgtUmur+2) << "Umur" << "| " << setw(dgtAlamat+3) << "Alamat"
         << "| " << setw(dgtProdi+3) << "Prodi" << "|\n";

    for(int i=0; i<jmlDigit; i++){
        cout << "=";
    }
    cout << "\n";

    for(int i=0; i<sizeAry; i++){
        cout << "| " << setw(3) << i+1 << "| " << setw(dgtNama+3) << nama[i]<< "| " << setw(dgtUmur+2) << umur[i] 
             << "| " << setw(dgtAlamat+3) << alamat[i]<< "| " << setw(dgtProdi+3) << prodi[i] << "|\n";
    }
    for(int i=0; i<jmlDigit; i++){
        cout << "=";
    }
    cout << "\n";
}

void tambahData(int &sizeAry, string nama[], int umur[], string alamat[], string prodi[])
{
    system("cls");

    cout << "Menambahkan Data Mahasiswa :\n"
         << "----------------------------\n\n";

    cout << "Masukkan nama   : ";
    getline(cin, nama[sizeAry]);
    cout << "Masukkan umur   : ";
    cin >> umur[sizeAry];
    cin.ignore();
    cout << "Masukkan alamat : ";
    getline(cin, alamat[sizeAry]);
    cout << "Masukkan prodi  : ";
    getline(cin, prodi[sizeAry]);

    sizeAry++;
}

void hapusData(int &sizeAry, string nama[], int umur[], string alamat[], string prodi[])
{
    int diHapus;

    system("cls");
    tampilData(sizeAry, nama, umur, alamat, prodi);

    cout << "\nData yang ingin dihapus : \n"
         << "1-Satu Baris\n"
         << "2-Nama\n"
         << "3-Umur\n"
         << "4-Alamat\n"
         << "5-Prodi\n"
         << "-------------------------\n"
         << "Select Option > ";
    cin >> diHapus;
    cout << "\n";

    switch(diHapus)
    {
        case 1 :
            cout << "Baris ke berapa yang ingin dihapus? > ";
            cin >> diHapus;

            for(int i=diHapus-1; i<sizeAry; i++){
                nama[i] = nama[i+1];
                umur[i] = umur[i+1];
                prodi[i] = prodi[i+1];
                alamat[i] = alamat[i+1];
            }
            sizeAry--;
            break;

        case 2 :
            cout << "Nama pada baris ke berapa yang ingin dihapus? > ";
            cin >> diHapus;
            nama[diHapus-1] = "-";
            break;

        case 3 :
            cout << "Umur pada baris ke berapa yang ingin dihapus? > ";
            cin >> diHapus;
            umur[diHapus-1] = 0;
            break;

        case 4 :
            cout << "Alamat pada baris ke berapa yang ingin dihapus? > ";
            cin >> diHapus;
            alamat[diHapus-1] = "-";
            break;

        case 5 :
            cout << "Prodi pada baris ke berapa yang ingin dihapus? > ";
            cin >> diHapus;
            prodi[diHapus-1] = "-";
            break;

        default :
            cout << "Pilihan TIDAK ditemukan !!\n";
    }
}

void ubahData(int sizeAry, string nama[], int umur[], string alamat[], string prodi[])
{
    int diUbah;

    system("cls");
    tampilData(sizeAry, nama, umur, alamat, prodi);

    cout << "\nData yang ingin diubah : \n"
         << "1-Satu Baris\n"
         << "2-Nama\n"
         << "3-Umur\n"
         << "4-Alamat\n"
         << "5-Prodi\n"
         << "-------------------------\n"
         << "Select Option > ";
    cin >> diUbah;
    cout << "\n";
    
    switch(diUbah)
    {
        case 1 :
            cout << "Baris ke berapa yang ingin diubah? > ";
            cin >> diUbah;
            cin.ignore();
            cout << "Masukkan nama yang baru   : ";
            getline(cin, nama[diUbah-1]);
            cout << "Masukkan umur yang baru   : ";
            cin >> umur[diUbah-1];
            cin.ignore();
            cout << "Masukkan alamat yang baru : ";
            getline(cin, alamat[diUbah-1]);
            cout << "Masukkan prodi yang baru  : ";
            getline(cin, prodi[diUbah-1]);
            break; 

        case 2 :
            cout << "Nama pada baris ke berapa yang ingin diubah? > ";
            cin >> diUbah;
            cin.ignore();
            cout << "Masukkan nama yang baru   : ";
            getline(cin, nama[diUbah-1]);
            break;

        case 3 :
            cout << "Umur pada baris ke berapa yang ingin diubah? > ";
            cin >> diUbah;
            cout << "Masukkan umur yang baru   : ";
            cin >> umur[diUbah-1];
            break;

        case 4 :
            cout << "Alamat pada baris ke berapa yang ingin diubah? > ";
            cin >> diUbah;
            cin.ignore();
            cout << "Masukkan alamat yang baru : ";
            getline(cin, alamat[diUbah-1]);
            break;

        case 5 :
            cout << "Prodi pada baris ke berapa yang ingin diubah? > ";
            cin >> diUbah;
            cin.ignore();
            cout << "Masukkan prodi yang baru  : ";
            getline(cin, prodi[diUbah-1]);
            break;
            
        default :
            cout << "Pilihan TIDAK ditemukan !!\n";
    }
}

void cariData(int sizeAry, string nama[], int umur[], string alamat[], string prodi[])
{
    string cariString, tampilNama[20], tampilAlamat[20], tampilProdi[20];
    int j = 0, diCari, cariInt, tampilUmur[20];

    system("cls");

    cout << "Data yang ingin dicari :\n"
         << "1-Nama\n"
         << "2-Umur\n"
         << "3-Alamat\n"
         << "4-Prodi\n"
         << "------------------------\n"
         << "Select Option > ";
    cin >> diCari;
    cout << "\n";

    switch(diCari)
    {
        case 1 :
            cout << "Masukkan nama yang dicari : ";
            cin >> cariString;

            for(int i=0; i<sizeAry; i++){

                if(nama[i] == cariString){
                    tampilNama[j] = nama[i];
                    tampilUmur[j] = umur[i];
                    tampilProdi[j] = prodi[i];
                    tampilAlamat[j] = alamat[i];
                    j++;
                }
            }
            if(j == 0){
                cout << "Data TIDAK ditemukan.\n";
            }
            else{
                cout << "\nData ditemukan :\n";
                tampilData(j, tampilNama, tampilUmur, tampilAlamat, tampilProdi);
            } 
            break;

        case 2 :
            cout << "Masukkan umur yang dicari : ";
            cin >> cariInt;
            
            for(int i=0; i<sizeAry; i++){

                if(umur[i] == cariInt){
                    tampilNama[j] = nama[i];
                    tampilUmur[j] = umur[i];
                    tampilProdi[j] = prodi[i];
                    tampilAlamat[j] = alamat[i];
                    j++;
                }
            }
            if(j == 0){
                cout << "Data TIDAK ditemukan.\n";
            }
            else{
                cout << "\nData ditemukan :\n";
                tampilData(j, tampilNama, tampilUmur, tampilAlamat, tampilProdi);
            }
            break;

        case 3 :
            cout << "Masukkan alamat yang dicari : ";
            cin >> cariString;
            
            for(int i=0; i<sizeAry; i++){

                if(alamat[i] == cariString){
                    tampilNama[j] = nama[i];
                    tampilUmur[j] = umur[i];
                    tampilProdi[j] = prodi[i];
                    tampilAlamat[j] = alamat[i];
                    j++;
                }
            }
            if(j == 0){
                cout << "Data TIDAK ditemukan.\n";
            }
            else{
                cout << "\nData ditemukan :\n";
                tampilData(j, tampilNama, tampilUmur, tampilAlamat, tampilProdi);
            }
            break;

        case 4 :
            cout << "Masukkan prodi yang dicari : ";
            cin >> cariString;
            
            for(int i=0; i<sizeAry; i++){

                if(prodi[i] == cariString){
                    tampilNama[j] = nama[i];
                    tampilUmur[j] = umur[i];
                    tampilProdi[j] = prodi[i];
                    tampilAlamat[j] = alamat[i];
                    j++;
                }
            }
            if(j == 0){
                cout << "Data TIDAK ditemukan.\n";
            }
            else{
                cout << "\nData ditemukan :\n";
                tampilData(j, tampilNama, tampilUmur, tampilAlamat, tampilProdi);
            }
            break;

        default :
            cout << "Pilihan TIDAK ditemukan !!\n";
    }
}