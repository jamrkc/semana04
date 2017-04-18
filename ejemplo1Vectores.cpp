#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    //Crear el vector
    vector<int> vec; //= {1,4,3,5,10,200,21,11,66,67};
    
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(5);
    
    //Usando el operador []
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;
        
    //Usando el metodo at
    for (int i = 0; i < vec.size(); i++)
         cout << vec.at(i) << endl;
    
    
    vec.pop_back();
    
    // Tamaño del vector
    cout << "El tamaño es: "<< vec.size() << endl;
    
    for(auto i: vec)
    {
        cout << i << endl;
    }
    
return 0; 
}