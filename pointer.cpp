                //.................Pointer...................................//
     /* What is pointer?

    Ans->Pointer is variable that hold addreas of another variable Same datatype.The size of pointer is 2 byte for  any datatype.Pointer veriable allow us to occupies the memory in runtime.

        Syntex:- <datatype> *<variable name>
                e.g.  int *ptr;

               */

#include<iostream>
using namespace std;
main(){
    int a=10,*p;
    p=&a;
    cout<<a<<endl;  //10
    cout<<&a<<endl; //1548875
    cout<<p<<endl;  //1548875
    cout<<*p<<endl; //10
}

//types of pointer

// 1. void pointer.
// 2. wild pointer.
// 3. NUll pointer.
// 4. pointer to pointer.
