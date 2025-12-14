#include<iostream>

using namespace std;

int main() {
    string input;
    cin >> input;

    if (input.length() >= 1 && input.length() <= 1000) {
        bool foundA = false;

        for (int i = 0; i < input.length(); i++) {
            if (input[i] == 'a') {
                foundA = true;
            }

            if (foundA) {
                cout << input[i];
            }
        }
        cout << endl;  // Add a newline at the end
    }

    return 0;
}
