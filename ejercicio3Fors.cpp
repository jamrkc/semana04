#include <iostream> 
using namespace std;
int main()

{
    //Creacion de variable
    int n = 0;
    
    //Ingreso de datos
    cout << " Ingrese el numero de datos:" << endl;
    cin>> n;
    
    //Variable de total
    int total = 0;
    
    // for antinguo
    for (int i = 1; i <= n; i++)
    {
        total = total + i;
        
    }
    
    //Mostrar el resultado
    cout << "El total es: " << total << endl;
    return 0;
}