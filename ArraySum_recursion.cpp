#include<iostream>
using namespace std;

int ArraySum(int arr[],int size){
 
    int n=size-1,sum=0;
    if(n==0){
    return arr[0];
    }
    sum = sum + arr[n] + ArraySum(arr,n);

    return sum;

} 

  int main(){

   int n; 
   cin>>n; 
   int arr[n];
   for(int i=0;i<n;i++){
     cin>>arr[i];
  }
  int ans=ArraySum(arr,n);
   cout<<ans<<endl;
}
