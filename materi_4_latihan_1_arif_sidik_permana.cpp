#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i=1,j=1;
    for (int i=1;i<5;i++)
    {
        cout << "menjalankan perulangan dengan for, nilai i = " <<i<< endl;
    }

    while(i<5)
    {
        cout << "Perulangan dengan While, nilai i = " <<i<< endl;
        i=i+1;
    }

    do{
        cout << "Perulangan dengan Do-While, nilai i = " <<j<< endl;
        j=j+1;
    }while(j<5);
    cout <<endl;

    system("pause");
    return 0;
}
