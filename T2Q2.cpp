#include <iostream> 
using namespace std; 
  
int main() 
{ 
    float y;
    float area;
    float PI = 3.142;
    cout << "Enter the radius of the circle: ";
    cin >> y;
    area  = PI*(y*y);
    cout << "Area of the Circle : " << area;
    return 0;
    
} 