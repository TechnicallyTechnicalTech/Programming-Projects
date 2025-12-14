#include<iostream>

using namespace std;

int main()
{
    int num1;
    int num2;
    
    cin >> num1 >> num2;
    
    while(num1 > 0 && num2 > 0)
    {
    if(num1 < num2)
    {
        cout << "0" << endl;
        break;
    }
    if(num1 > num2)
    {
    cout << "1" << endl;
    break;
    }
    if(num1 == num2)
    {
        cout << "0" << endl;
        break;
        
    }
    }
    
}
