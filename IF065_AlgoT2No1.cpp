#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
    float x, y;

    cout<<"           2x^2 + 5x - 8\n";
    cout<<"fungsi y = --------------\n";
    cout<<"                  2\n\n";
    cout<<"masukkan nilai x > ";
    cin>>x;
    y = (2*pow(x,2) + 5*x - 8)/2;
    cout<<"hasil fungsi y = "<<y;
    getch();
    return 0;
}
