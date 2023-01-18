                             // LEC - 33 DAY -3 
#include<iostream>
using namespace std ;

// (ARR + 1) AND (SIZE -1) KA LOGIC when key is absent
void printArray(int arr[] , int n)
{
    cout<<"size of the array is "<<n <<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


bool linearSearch(int arr[] , int n  , int key)
{
    //EXTRA PART ::
    printArray(arr , n); // printing all the elements ..

    //BASE CASE
    if(n==0)
    {
        return false ;
    }
    if(arr[0]==key)
    {
        return true ;
    }
    //RECURSIVE RELATION - maine ek case ko call krdiya bhaki k recursion khud karega
    else{
        return linearSearch(arr+1 , n-1 , key);
    }
}

int main()
{
    int arr[5] = {3 , 5 , 1 , 2 , 9};
    int n = 5 ;
    int key = 88 ; 
    bool ans = linearSearch(arr , n  , key );

    if(ans)
    {
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
}