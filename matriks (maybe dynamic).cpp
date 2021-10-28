#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int ib, ik, baris, kolom, max, temporary, jmlDigit;
    
    cout<<"berapa baris matriks yang kamu mau > ";
    cin>>baris;
    cout<<"berapa kolom matriks yang kamu mau > ";
    cin>>kolom;

    int bk = baris*kolom;
    int matrik[bk];

    for(bk=0; bk<baris*kolom; bk++){

        cout<<"["<<ib<<"] ["<<ik<<"] = ";
        cin>>matrik[bk];
        ik++;
        if(ik == kolom){
            ik = 0;
            ib++;
        }
    }

    for(bk=0; bk<baris*kolom; bk++){

        if(max < matrik[bk]){
            max = matrik[bk];
        }
    }

    temporary = max;
    while(temporary != 0){
        temporary /= 10;
        jmlDigit++;
    }
    ik = 0;

    cout<<"\nHasil Matriks : \n\n";

    for(bk=0; bk<baris*kolom; bk++){

        if(matrik[bk] > 99){
            cout<<"|"<<setw(jmlDigit+2)<<matrik[bk]<<setw(jmlDigit);
        }
        else{
            cout<<"|"<<setw(jmlDigit+1)<<matrik[bk]<<setw(jmlDigit+1);
        }
        ik++;
        if(ik == kolom){
            cout<<"|";
            cout<<"\n";
            ik = 0;
        }
    }
    return 0;
}