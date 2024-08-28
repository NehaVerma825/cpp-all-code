#include <iostream>
#include <map>
using namespace std;

void explainMap() {  // map stores unique keys in sorted order
    map<int, int> mpp;  // <key, value> = <unique, non-unique>, can be of any data type
    // map<int, pair<int, int>> mpp;
    // map<pair<int, int>, int> mpp;
    mpp[1] = 2; // internally store as {1,2} ,{key, value}
    mpp.emplace(3, 2);
    mpp.insert({3, 4});
    mpp[{4, 5}] = 10;

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[4] << endl;

    auto it1 = mpp.find(3); // gives iterator to element with key 3
    if (it1 != mpp.end()) {
        cout << it1->second << endl; // correctly access the value part of the element
    }
    
    auto it2 = mpp.find(5);  // not present, so gives mpp.end()
    if (it2 == mpp.end()) {
        cout << "Key 5 not found" << endl;
    }

    auto it3 = mpp.upper_bound(2); // first element with key > 2
    if (it3 != mpp.end()) {
        cout << "Upper bound of 2: " << it3->first << " " << it3->second << endl;
    }

    auto it4 = mpp.lower_bound(3); // first element with key >= 3
    if (it4 != mpp.end()) {
        cout << "Lower bound of 3: " << it4->first << " " << it4->second << endl;
    }
}

int main() {
    explainMap();
    return 0;
}
