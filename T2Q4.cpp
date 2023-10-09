#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int age;
    cout << "Enter the age of the person: ";
    cin >> age;
    
    if (age >= 0 and age < 13)
    {
        cout << "The person is a child.";
    }
    else if (age >= 13 and age <= 19)
    {
        cout << "The person is a teenager.";
    }
    else if (age >19 and age < 60)
    {
        cout << "The person is an adult. ";
    }
    else if (age >= 60 and age <=100)
    {
        cout << "The person is a senior citizen. ";
    }
    else 
    {
        cout << "This is an invalid number.";
    }
    return 0;
} 