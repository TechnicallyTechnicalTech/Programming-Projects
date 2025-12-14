#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    
    cin >> a >> b >> c;
    
    if((a >= 1 && a <= 100)&& (b >= 1 && b <= 100) && (c >= 720 && c <= 1439))
    {
        cout << c - (a + b) << endl;
    }
    return 0;
}
