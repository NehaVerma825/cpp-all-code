#include <iostream>
using namespace std;

/*cpp stl divided into 4 parts
  algorithms
  containers
  functions
  iterators*/

// Define explainPair outside main as it is a function
void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second<<endl;

    //Nested prop of pair for more than 2 variable in pair
    pair<int, pair<int ,int>> q ={4,{5,6}}; 
    cout<<q.first<<" "<<q.second.second <<" "<<q.second.first<<endl;

    //pairs in array indexes
    pair<int,int> arr[]={{2,3}, {4,5},{6,7}};
    cout<<arr[1].second<<" "<<arr[0].first;


}

int main() {
    // Call explainPair from main
    explainPair();
    return 0;
}



