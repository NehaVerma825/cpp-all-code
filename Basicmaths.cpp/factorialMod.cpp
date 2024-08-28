#include <iostream>
using namespace std;

unsigned long long factorialMod(int n, unsigned long long m) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result = (result * i) % m; //This ensures that after each multiplication, the 
        //result remains within the range [0, m-1]
    }
    return result;
}

int main() {
    int n = 212;
    unsigned long long m;
    
    cout << "Enter the modulus value (m): ";
    cin >> m;
    
    unsigned long long result = factorialMod(n, m);
    cout << "212! % " << m << " = " << result << endl;
    
    return 0;
}