#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int j=1, m, d;
    cout <<"==Menghitung Menit Detik=="<<endl;
    cout <<endl;
    do {
        m= j *60;
        d=m*60;
        cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;
        j +=1;
    } while (j <=24);

    system("pause");
    return 0;
}
