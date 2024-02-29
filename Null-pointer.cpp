// ................Null pointer..................//

/*What is NULL pointer?
    Ans->A pointer variable that is initialize with the NULL value at the time of pointer declaration is called Null pointer. 
    The Null pointer that doesn't point to memory location.

    syntax:- Data-type *Var-name='\o';

    */

#include<iostream>
using namespace std;
main()
{
int *p=NULL;
cout<<*p;
}