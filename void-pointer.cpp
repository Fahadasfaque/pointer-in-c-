    //...............void pointer.................//

    /* What is void pointer ? Syntax & Example.
    Ans->A pointer which is declared by the help of 'void' keyword is called void pointer.
        It Can hold any type of address.
        The size of void pointer is 2-bytes.
        It is also known as Generic printer.

        Syntax:- void *ver_name;
            e.g. 
                int *p,a=10;    x
                float *p,b=10;  x

            
    */

#include<iostream>
using namespace std;
main(){
void *p;
char a='A';
p=&a;
cout<<*(char *)p;
}