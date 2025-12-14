#include <iostream>

using namespace std;

int main()
{
    //declare a varible for user input
    string input ;
    
    //variable for char count
    int acc = 0;
    
    cin >> input;
    
    for(int i = 0; i <input.length(); i++)
    {
        acc++;
        
    }
    cout << acc;
    
    return 0; 
}
