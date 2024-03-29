#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
   cin>>a;
   int arr[a];
   for(int i=0;i<a;i++)
   {
       cin>>arr[i];
   }
   int start=0;
   int end=a-1;
  while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
    for(int i=0;i<a;i++)
   {
       cout<<arr[i];
   }
    return 0;
}