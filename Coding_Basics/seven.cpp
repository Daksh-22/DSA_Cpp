// #include<iostream>
// using namespace std;
// int firstSeven(int *arr, int n ){
//     if(n==0){
//         return -1;      //base case
//     }
    
//     //recursive case
//     if (arr[0]==7){
//         return 0;}
//     int index = firstSeven(arr+1,n-1);  //arr+1 krdiya kyuki humne 1 block hta dia bcz 7 toh vha hai nahi 
//     if(index==-1){
//         return -1;
//     }
//     else{
//         return index+1;     //index+1 bcz humne pehle block hta dia tha
//     }
      
// }
// int main()
// {
//     int a[] = {1,2,3,5,7,8,89};
//     int n = sizeof(a)/sizeof(int);   //to count the number of elements in array

//     cout<< firstSeven(a,n)<<endl;
    
//     return 0;
// }
//****************************************************************************************************** */

// #include<iostream>
// using namespace std;
// int lastSeven( int *arr,int n) {
//     if (n==0){
//         return -1;
//     }
   
//     if (arr[n-1]==7){
//         return n-1; 
//     }
//      return lastSeven(arr,n-1);   

// }

    


// int main()
// {
    
//      int a[] = {1,2,3,5,7,8,89};
//     int n = sizeof(a)/sizeof(int);   //to count the number of elements in array

//      cout<< lastSeven(a,n)<<endl;
//     return 0;
// }

//////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void allSeven(int *a, int i ,int n){
    if(i==n){
        return;
    }
    if(a[i]==7) {
        cout<<i<<" ";
    }
    allSeven(a, i+1, n) ;
   

    

}

int main()
 {
    
      int a[] = {1,2,3,5,7,8,89};
     int n = sizeof(a)/sizeof(int);   //to count the number of elements in array

       allSeven(a,0,n);
     return 0;
 }