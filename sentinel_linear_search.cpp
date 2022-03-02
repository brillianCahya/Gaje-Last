#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

struct orang{
    int nik;
    string nama;
    string almt;
    char gol;
} warga[10], ketemu[1];

void search(orang warga[], orang ketemu[], int dicari);
void show(orang warga[], int row);

int main()
{
    int opsi, dicari;
    int nik[] = {3300, 3301, 3302, 3303, 3304, 3305, 3306, 3307, 3308, 3309};
    string nama[] = {"Upin","Ipin","Ros","Opah","Alang","Mei-Mei","Mail","Fizi","Raju","Opet"};
    string almt[] = {"Durian","Runtuh","Kuala","Lumpur","Bicini","Bottom","Rock","Bottom","Krusty","Krab"};
    char golong[] = {'U','I','R','O','A','M','M','F','R','Z'};

    for(int i=0; i<10; i++){

        warga[i].nik = nik[i];
        warga[i].nama = nama[i];
        warga[i].almt = almt[i];
        warga[i].gol = golong[i];
    }

    do{
        
        cout << "\n"
             << "1-Tampilkan Data Tersimpan\n"
             << "2-Cari Nomor Induk (sentinel linear search)\n"
             << "3-Exit\n"
             << "Pilih > ";
        cin >> opsi;
        cout << "\n";

        switch(opsi)
        {
            case 1:
                show(warga, 10);
                cout << "Tekan \"enter\" untuk melanjutkan ";
                getch();
                system("CLS");
                break;

            case 2:
                cout << "Nomor induk yg dicari : ";
                cin >> dicari;
                search(warga, ketemu, dicari);
                break;

            case 3:
                cout << "Tengkyuu..";
                break;

            default:
                cout << "Input tidak ada di menu.\n";
        } 
    } while(opsi != 3);

    return 0;
}

void show(orang warga[], int row)
{
    cout << setw(38) << setfill('=') << "" << setw(0) << setfill(' ') << "\n";

    cout << "| " << left << setw(5) << "NIK" << "| " << setw(8) << "Nama" 
         << "| " << setw(7) << "Alamat" << "| " << setw(9) << "Golongan" << "|\n";

    cout << setw(38) << setfill('=') << "" << setw(0) << setfill(' ') << "\n";

    for(int i=0; i<row; i++){

        cout << "| " << setw(5) << warga[i].nik << "| " << setw(8) << warga[i].nama 
             << "| " << setw(7) << warga[i].almt << "| " << setw(3) << "" << setw(6) << warga[i].gol 
             << "|\n";
    }

    cout << setw(38) << setfill('=') << "" << setw(0) << setfill(' ') << "\n";
}

void search(orang warga[], orang ketemu[], int dicari)
{
    int i = 0, last_index;

    last_index = warga[9].nik;
    warga[9].nik = dicari;

    while(warga[i].nik != dicari){

        i++;
    }
    warga[9].nik = last_index;

    if(warga[i].nik == dicari){

        ketemu[0].nik = warga[i].nik;
        ketemu[0].nama = warga[i].nama;
        ketemu[0].almt = warga[i].almt;
        ketemu[0].gol = warga[i].gol;

        cout << "Data ditemukan :\n";
        show(ketemu, 1);
    }
    else{

        cout << "Data Tidak ditemukan.\n";
    }
}