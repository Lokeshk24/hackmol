#include<iostream>
using namespace std;
int main(){
 int n;
 int arr[100];
 int t;
 cout<<"Enter the size of array "<<endl;
 cin>>n;
 cout<<"Enter the array "<<endl;
 for(int i=0;i<n;i++)
 cin>>arr[i];
 for(int i=0;i<=(n/2);i++){
 t=arr[i];
 arr[i]=arr[n-1-i];
 arr[n-1-i]=t;
 }
 cout<<"The reverse array is "<<endl;
 for(int i=0;i<n;i++)
 cout<<arr[i]<<"\t";
 return 0;
}