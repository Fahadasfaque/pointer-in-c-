//......................wild pointer........................//
/*
    Q. What is Wild pointer? With Example.
    Ans-> A pointer variable that not initialized with any address is called wild pointer.

    wild pointer is also Known as bad pointer because it holds the address of randen memomy location.

     syntex:- data-type  *var-name;
*/
#include<iostream>
using namespace std;
main()
{
int *p,*q,*r;
cout<<p<<endl<<q<<endl<<r<<endl;
}