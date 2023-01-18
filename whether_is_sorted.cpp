                            // LEC - 33 DAY - 3
#include<iostream>
using namespace std ;
bool issorted(int arr[] , int n )
{
    //base case ..
    if(n ==0 || n==1) //yani ki array ki size zero ho ya array meh sirf ek element present ho tbhi voh sorted ho he hoga 
    {
        return true;
    }

    if(arr[0] > arr[1] )
    {
        return false ; //unsorted
    }

        //recursive relation
    else
    {
        return issorted(arr+1 , n-1 ); // sort kardo arr[1] se arr[4] thk 
    }
}

int main()
{
    int arr[5] = { 12 , 23 , 45 , 55 ,78 };
    int n = 5 ; //size
    
   bool ans = issorted(arr , n); //function calling 
     //printing 
   if(ans)
   {
    cout<<"sorted"<<endl;
   }
   else{
    cout<<"unsorted"<<endl;
   }
}