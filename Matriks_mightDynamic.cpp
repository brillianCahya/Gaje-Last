#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int ib, ik, baris, kolom, max, temporary, jmlDigit;
    
    cout<<"Jumlah baris matriks yang kamu mau > ";
    cin>>baris;
    cout<<"Jumlah kolom matriks yang kamu mau > ";
    cin>>kolom;

    int matrix[baris][kolom];
    cout<<"\nInput nilai matriks :\n";

    for(ib=0; ib<baris; ib++){

        for(ik=0; ik<kolom; ik++){
            cout<<"["<<ib<<"] ["<<ik<<"] = ";
            cin>>matrix[ib][ik];
        }
    }

    for(ib=0; ib<baris; ib++){

        for(ik=0; ik<kolom; ik++){

            if(matrix[ib][ik] > max){
                max = matrix[ib][ik];
            }    
        }
    }
    temporary = max;
    while(temporary != 0){
        temporary /= 10;
        jmlDigit++;
    }

    cout<<"\nHasil Matriks : \n\n";

    for(ib=0; ib<baris; ib++){

        for(ik=0; ik<kolom; ik++){

            if(matrix[ib][ik] > 99){
                cout<<"|"<<setw(jmlDigit+2)<<matrix[ib][ik]<<setw(jmlDigit);
            }
            else{
                cout<<"|"<<setw(jmlDigit+1)<<matrix[ib][ik]<<setw(jmlDigit+1);
            }
        }
        cout<<"|";
        cout<<"\n";
    }
    return 0;
}