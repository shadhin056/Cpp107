#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={2,4,6,9,3,5,70};
   for(int i=0;i<7;i++)
   {
       cout<<arr[i]<<endl;
   }
   sort(arr,arr+7);

   cout<<"\nAfter sorting\n\n";
    for(int i=0;i<7;i++)
   {
       cout<<arr[i]<<endl;
   }
   return 0;
}

