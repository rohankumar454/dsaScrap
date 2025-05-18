#include <iostream>
using namespace std;
int main()
{
    // reference variable
    int i = 500;
    int &ref = i;
    cout << i << endl;
    cout << ref << endl;
    i++;
    cout << i << endl;
    ref++;
    cout << ref << endl;

    //the value '500' is at constant location
    //but now it can be accessed from two names






    return 0;
}
