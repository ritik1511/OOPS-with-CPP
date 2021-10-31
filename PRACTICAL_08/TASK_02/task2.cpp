#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main()
{
int a =10;
int *ptr = &a;
int **ptr2 = &(ptr);
cout<<**ptr2<<endl;
return 0;
}
