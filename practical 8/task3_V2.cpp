#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int *p;
  int **q;
  p=&a;
  q=&p;
  **q=20;
  cout<<*p<<endl;
  cout<<**q;
  return 0;
}
