#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    for(int i = 0; i < argc; i++) {
        char minus = argv[i][0];
        char arg = argv[i][1];
        
        switch (arg)
        {
        case 'c':
            cout << "Hello, World!" << endl;        
            break;
        
        default:
            break;
        }
    }
}