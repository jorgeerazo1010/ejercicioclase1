#include <iostream>//Bibliotecas
using namespace std; 
int n;
int main (){

    cout << "Ingrese el numero entero:" << endl;
    cin >> n;
    
if (n<=0)
{
    cout << "No entra en el rango";
} else {
for (int i = 2; i < n; i++)
{
 cout << i <<"\n";
}

}
return 0;    

}

