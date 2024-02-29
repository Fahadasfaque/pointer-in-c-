// C++ program to swap two numbers using pointers
#include <iostream>
using namespace std;
main() {

    int a, b, temp;
    int *ptr1, *ptr2;

    cout<<"Enter the value of a and b: ";
    cin>>a>>b;

    cout<<"Before swapping a= "<<a<<"b= "<<b<<endl;

    // Assign the memory address of a and b to *ptr1 and *ptr2
    ptr1 = &a;
    ptr2 = &b;

    // Swap the values a and b
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

   cout<<"After swapping a= "<<a<<"b= "<<b<<endl;

}