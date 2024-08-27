#include <iostream>
using namespace std;

int zymain(int, char**);
void reverse(char*, char*);

int main(int argc, char **argv) {
    return zymain(argc, argv);
}

int zymain(int argc, char** argv) {
    // write your code for the main function of HW1 here
    int commandLineParameters = 4;

    if(argc != 4){
        cout << "Inccorect number of command line parameters: " << argc << endl << "Looking for: " << commandLineParameters << endl;
        return 1;
    }

    cout << "argc: " << argc << endl;
    for(int i = 0; i < argc; ++i){
        cout << "argv[" << i << "]: " << argv[i] << endl;
    }

    return 0;
}

void reverse (char *front, char *rear) {
    // write your code for the reverse function here

}