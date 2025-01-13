#include <iostream>
using namespace std;

string kthChildNthGeneration(int n, long long k) {
    bool isMale = true; // Start with the first generation being Male (0)

    // Iterate back to the first generation
    while (n > 1) {
        if (k % 2 == 0) {
            isMale = !isMale; // Flip gender for even-indexed children
        }
        k = (k + 1) / 2; // Move to the parent in the previous generation
        n--;
    }

    return isMale ? "Male" : "Female";
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        cout << kthChildNthGeneration(n, k) << endl;

    }

    return 0;
}
