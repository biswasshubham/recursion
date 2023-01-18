                                // LEC - 33 DAY - 3
#include<iostream>
using namespace std ;
int getSum ( int arr[] , int n )
{
    //base case.
    if(n == 0) //array size is zero 
    {
        return n ;
    }

     if(n == 1) //having one element in an array 
    {
        return arr[0] ; // arr[0] means joh bhi first element hoga vahi aayega 
                        // arr[0] ka funda yaha aagaya 
    }

    //recursive relation 

    // int remainingpart = getSum(arr + 1 , n - 1); //arr+1 means arr[0] k bhad k sare elements 
                                                 // n-1 means jaise ki arr[0] hogya toh size bhi -1 hoga 
    // int sum = arr[0] + remainingpart ; // arr[0] joh phele hogaya plus bhaki ka joh bacha hua hai 
    // return sum; 
    
    return arr[0] + getSum(arr+1 , n - 1); // upar k teeno step ko milak ek step mh kardiya

}
int main()
{
    int arr[5] = { 1 , 2 , 4 , 5 ,7 };
    int n = 5 ; //size

    int sum = getSum (arr , n);
    cout<<"sum is "<<sum<<endl;

}