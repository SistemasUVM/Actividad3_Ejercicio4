#include <stdlib.h>
#include <iostream>

using  namespace std;

int main(int argc, char const *argv[])
{
    int articulos,cantidad;
    float precio,i,total=0;

    cout << "Ingresa la cantidad de articulos" << endl;

    cin >> articulos;

    for ( i = 0; i < articulos; i++)
    {
        cout << "Articulo " << i + 1 << " cantidad" << endl;
        cin >> cantidad;
        cout << "Articulo " << i + 1 << " precio" << endl;
        cin >> precio;
        total = total + (precio * cantidad);
    }

    cout << "Total a pagar " << total << endl; 
    
    
    return 0;
}
