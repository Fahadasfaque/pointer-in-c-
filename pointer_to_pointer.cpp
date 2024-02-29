//.................Pointer to Pointer...................//
/*
        Q.What is pointer to pointer? With Example.
        Ans-> A pointer variable that holds a addres of another pointer variable is called pointer to pointer.

        we can implement the pointer to pointer variable upto 12 stages.
        e.g **q; ***.....*q;

        if we working with more pointer to pointer variable then the execution will be slow.

        syntex:- **var_name;
*/
#include<iostream>
using namespace std;
main(){
    int a=10,*p,**q;
    p=&a;
    q=&p;
    cout<<a<<endl;  //10
    cout<<&a<<endl; //1548875
    cout<<p<<endl;  //1548875
    cout<<*p<<endl; //10
    cout<<q<<endl;  //456547
    cout<<*q<<endl; //1548875
    cout<<**q<<endl;//10
}