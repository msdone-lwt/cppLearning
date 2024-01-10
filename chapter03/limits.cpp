// some integer limits
#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int nIntLimit(INT_MAX); // c++ initialization
    short nShortLimit = {SHRT_MAX}; // c++11 initialization
    long nLongLimit {LONG_MAX}; // c++11 initialization
    long long nLlongLimit = LLONG_MAX;

    // sizeof opertor yields size of type or of variable
    cout << "char is " << sizeof (char) << " bytes" << endl;
    cout << "short is " << sizeof nShortLimit << " bytes" << endl;
    cout << "int is " << sizeof (int) << " bytes" << endl;
    cout << "long is " << sizeof (long) << " bytes" << endl;
    cout << "long long is " << sizeof (long long) << " bytes" << endl;
    cout << endl;

    cout << "bits pre byte = " << CHAR_BIT << endl;
    cout << endl;

    cout << "maximum value: " << endl;
    cout << "short max = " << nShortLimit << endl;
    cout << "int max = " << nIntLimit << endl;
    cout << "long max = "  << nLongLimit << endl;
    cout << "long long max =  " << nLlongLimit << endl;
    return 0;
}