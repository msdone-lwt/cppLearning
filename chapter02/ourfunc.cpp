#include <iostream>
void simon(int); // function prototype

int main() 
{
    using namespace std;
    simon(3);
     
    cout << "Pick an intger.";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}