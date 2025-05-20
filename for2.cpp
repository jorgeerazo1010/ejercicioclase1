#include <iostream> //Bibliotecas
using namespace std;

int main()
{
    int n, primo, modulo;
    primo = 1;
    cout << "Ingrese el numero entero:" << endl;
    cin >> n;
    for (int i = n - 1; i >= 2; i--)
    {
        modulo = n % i;
        if (modulo == 0)
        {
            cout << "No es primo" << endl;
            primo = 0;
            i = 2;
        }
        else
        {

        }}
            if (primo == 1)
            {
                cout << "Es primo" << endl;
                primo = 0;
            }
            else {

            }
    return 0;
}