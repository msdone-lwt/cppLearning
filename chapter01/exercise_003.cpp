#include <iostream>

using namespace std;
void blind_mice(void);
void how_they_run(void);

int main()
{
    blind_mice();
    blind_mice();

    how_they_run();
    how_they_run();
    
    return 0;
}

void blind_mice(void)
{
    cout << "Three blind mice." << endl;
    return;
}

void how_they_run(void)
{
    cout << "See how they run." << endl;
    return;
}