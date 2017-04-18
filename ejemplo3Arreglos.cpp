#include <iostream>
using namespace std;
int main()
{
    //
    int arreglo[10] = {1,4,3,5,10,200,21,11,66,67};
    
    //Crear la variable max
    int max = arreglo [0];
    
    //Recorriamos el arreglo
    for (auto i : arreglo)
    {
        // Si la variable max es menor que i, max se convierte en i
       if (max < i)
           max = i;
    }
    
    //Presentar el maximo
    cout << " El valor maximo es: " << max << endl;
    
}
    
    