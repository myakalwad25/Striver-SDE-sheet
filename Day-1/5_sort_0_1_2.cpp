#include <bits/stdc++.h> 
using namespace std;

//   code by vijay myakalwad 

void sort012(int *arr, int n)
{
   
   int st=0;
   int ed=n-1;
   int i=0;
    while(i<=ed){
      if(arr[i]==0) {
          arr[i]=arr[st];
          arr[st]=0;
          st++;
          i++;
      }
      else if(arr[i]==2 ) {
        arr[i]=arr[ed];
        arr[ed]=2;
        ed--;
      }
      else i++;
   }
}