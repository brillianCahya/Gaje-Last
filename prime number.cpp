#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int ang, i, bisa;
    bool prima=true;

    cout<<"-----program menentukan bilangan prima-----\n\n";
    cout<<"masukkan bilangan yang kamu tes > ";
    cin>>ang;

    if(ang==0 || ang==1){
        prima=false;
    }
    else{
        for(i=2; i<=ang/2; i++){
            if(ang%i==0){
                prima=false;
                bisa=i;
            break;
            }
        }
    }
    if(prima){
        cout<<ang<<" adalah angka prima";
    }
    else{
        cout<<ang<<" bukan prima karena bisa dibagi "<<bisa;
    }
    getch();
    return 0;
}