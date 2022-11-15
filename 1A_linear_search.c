#include<iostream>
using namespace std ;
int main(){
int search, i, n;
cout<<" Size of array "<<endl; // this is how u declare an array
cin>>n;
int arr[n];
for ( i = 0; i < n; i++)
{
cin>>arr[i];
}
cout<< " Enter the no. you want to search "<<endl;
cin>>search;
for ( i = 0; i < n; i++)
{
if (arr[i]==search)
{
cout<< search << " Is present at position "<<i+1;
break;
}
}
if (i==n)
{
cout<< search<<" is not present in the array. "<<endl;
}
return 0;
}
