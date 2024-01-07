#include <iostream> // converts stone to pounds
int stoneToLb(int); // function prototype

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stoneToLb(stone);
    cout << stone << " stone = " << pounds << " pounds." << endl;
    return 0;
}

int stoneToLb(int stones)
{
    return 14* stones;
}