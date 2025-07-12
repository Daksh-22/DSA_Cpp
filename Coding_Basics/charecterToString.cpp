#include<iostream>
using namespace std;

int stringToInt(char *a, int n) {
  if (n == 0 ) {

    return 0;
  }
  return (stringToInt(a, n-1) *10 + (a[n-1]-'0'));
}

int main()
{
    char a[] = "1234";
    int n = strlen(a);
    int x = stringToInt(a,n);

    cout << x +1 << endl;
    return 0;
    
}