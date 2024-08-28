#include <iostream>
#include <set>   //time complexcity is of O(log(n))
//store everything in sorted order and unique manner
using namespace std;

void explainSet(){
    set<int>s; //tree container
    s.emplace(1); //{1}
    s.insert(2);//{1,2}
    s.insert(2);  //{1,2}
    s.insert(4);  //{1,2,4}
    s.insert(8); //{1,2,4,8}


    auto it1 =s.find(3);  // return address corresponding to element 3
    auto it2=s.find(5);  //not present but returns st.end()-> end address
    s.erase(4); //erase 4 and  maintains sorted order also take logrithmic time
    

    int cnt=s.count(1);
    auto it3=s.find(3);
    s.erase(it3); //take cons time
    auto it4=s.find(2);
    auto it5=s.find(4);
    s.erase(it4,it5); //after erase {1,4,8}  //erase {start,end}



    auto it6=s.lower_bound(2);
    auto it7=s.upper_bound(4);


}

void explainMultiSet(){
   // everything is ;same as set bt it also stores duplicate element
   multiset<int>ms;
   ms.insert(1); //{1}
  ms.insert(1);  //{1,1}
  ms.insert(1);  //{1,1,1}

  ms.erase(1); //all 1's erased
  ms.erase(ms.find(1)) //only 1's at find location erase  //sinle one erase
  int cnt=ms.count(1);
  ms.erase(ms.find(1),ms.find(1)+2); //erase(start,end)
} 


void explainUset(){
    unordered_set<int>s;
    //stores unique bt in unoreder order  -<better complexity
    //upper and lower bound function dont work
    //best case complexity->O(1);
    //wrost case complexity-> O(n)

}
int main(){
    explainSet();  // Call explainSet from main
    return 0;
}