#include <iostream>
#include <vector>
using namespace std;

int main() {

   /* Type your code here. */

    vector<int> vec = {1, 2, 3, 4, 5};
    
    for(int &myValue : vec){
        myValue = 999;
    }

    for(int myValue : vec){
        cout << myValue << " ";
    }
    cout << endl;

    cout << vec.at(3) << endl;

   return 0;
}