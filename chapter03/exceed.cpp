// exceeding some integer limits
#include <iostream>
#include <climits>
#define ZERO 0

int main()
{
    using namespace std;

    short sam{SHRT_MAX};
    unsigned short sue{sam};
    cout << "Add:" << endl;
    cout << "Sam has " << sam << " dollars and Sue has "<< sue <<  " dollars deposited." << endl;
    cout << "Add $1 to each account." << endl;
    sam += 1;
    sue += 1;
    cout << "Now!" << endl;
    cout << "Sam has " << sam << " dollars and Sue has "<< sue <<  " dollars deposited.\nPoor sam!" << endl;
    cout << endl;

    cout << "Take:" << endl;
    sam = ZERO;
    sue = ZERO;
    cout << "Sam has " << sam << " dollars and Sue has "<< sue <<  " dollars deposited." << endl;
    cout << "Take $1 to each account." << endl;
    sam -= 1;
    sue -= 1;
    cout << "Now!" << endl;
    cout << "Sam has " << sam << " dollars and Sue has "<< sue <<  " dollars deposited.\nLucky sam!" << endl;
    return 0;
}