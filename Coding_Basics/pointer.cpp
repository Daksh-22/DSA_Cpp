#include<iostream>
using namespace std;

// int main()
// {
//     int x = 23;
//     float f = 3.14;
//     double d = 12344.4565476;
//     char c = 'c';
//     bool b = false;
//     int* iptr = &x;
//     float* fptr = &f;
//     double* dptr = &d;
//     char* cptr = &c;
//     bool* bptr = &b;

//     cout << iptr << endl;
//     cout << cptr << endl;

//     return 0;
// }
//******************************************************************* */

/*Derefrencing a Pointer*/  

// int main () {
//     // int z;
//     // cin>>z;

//     // int* iptr = &z;
//     // cout << *iptr << endl;

//     int  c = 100;
//     char* cptr = (char*)&c;
//     cout << (int)cptr << endl;


//     char x = 'c';
//     int* iptr= (int*)&c;
//     cout << *iptr <<endl;
// }

/********************************************************* */
/*PointerArithematic*/

int main() {
    int x = 1;
    int* cptr = &x;
    cout << cptr << endl;
    cptr++;                   // 4byte aage jaara hai address ka pointer
    cout << cptr << endl;
}
