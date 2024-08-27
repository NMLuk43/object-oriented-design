#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {

    //argc -> number of arguments
    //argv -> pointer to arguments

    char* currentArg;

    cout << "The command line arguments for this execution are: \n";
    for(int i = 0; i < argc; i++){
        currentArg = argv[i]; //this is for debugger use
        cout << i << ": " << argv[i] << endl;
    }

    int i = 3;
    int* ip = &i;

    cout << "Address of i is " << ip << " and " << &i << endl;
    cout<< "Value of i is " << i << " and " << *ip << endl;





    return 0;
}