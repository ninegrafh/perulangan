#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i=20;
    while(i<20)
    {
        cout << "Perulangan dengan While" << endl;
    }

    do{
        cout << "Perulangan dengan Do-While" << endl;
    }while(i<20);

    system("pause");
    return 0;
}
