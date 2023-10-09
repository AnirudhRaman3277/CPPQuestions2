#include <iostream> 
using namespace std; 
  
int main() 
{ 
    float y;
    cout << "Enter the value in Float: ";
    cin >> y;
    
    int x = (int)y;
  
    cout << "Typecasted number: " << x;
  
    return 0; 
} 