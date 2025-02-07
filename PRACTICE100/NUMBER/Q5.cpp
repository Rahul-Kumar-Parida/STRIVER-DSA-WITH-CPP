#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = to_string(n).length();
    int sum = 0;
    int ar = n;
    
    while (ar > 0) {
        int digit = ar % 10;
        int power = 1;
        
        // Efficiently calculate digit^count without using pow
        for (int i = 0; i < count; i++) {
            power *= digit;
        }
        
        sum += power;
        ar /= 10;
    }
    
    
    if (sum == n) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
