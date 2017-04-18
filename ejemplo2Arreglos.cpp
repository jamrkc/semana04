#include <iostream>
using namespace std;
int main()
{
    int arreglo[10] = {1,4,3,5,10,20,21,11,66,67};
    
    
    //Variable de totales
    int total = 0;
    
    //Bucles
    for (auto i : arreglo) {
        total = total + i;
    }
     //Muestro el resultado
    cout << "El total es:" << total << endl;
    
   return 0;  
}
    
    
   
    
   