#include <iostream>

using namespace std;

int main()
{
    int distance = 0, yard;
    cout << "Please input a distance numebr in the unit of Long: ";
    cin >> distance;
    yard = distance * 220;
    cout << "The distance tranform in yards is: " << yard << endl;
    return 0;
}