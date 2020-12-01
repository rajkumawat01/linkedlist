#include <iostream>
using namespace std;

//this is example is to illustrate
//how pointer variable can be used to display
//->address of variable
//->value of the variable

int main()
{
    int x = 10;
    //random interger variable

    int *ptr;
    //pointer variable

    ptr = &x;
    //assigning address of x to pointer

    cout << "value of *ptr variable is : " << ptr << endl;
    cout << "Value of ptr variable is : " << *ptr << endl;

    return 0;
}
