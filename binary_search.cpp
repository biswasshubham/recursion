                                    //LEC - 33 DAY-3
#include<iostream>
using namespace std ;
int binarySearch(int arr[]  , int key , int s , int e)
{
    //base case ---- same as nrml binary search
    //element not found
    if(s <= e) //yh case paar aagya toh rukh ja 
    return 0;

    int mid = (s + e) /2;

    //if element found
    if(arr[mid] == key )
    return 1; 
    
    //recursive relation
    if(arr[mid] < key)
    {
        //go to right half
        return binarySearch(arr , key , mid+1 , e ); //r.h.s mh jane k liye hum log s = m+1 krte the vahi yaha bhi kiya hai bhas start k jgh pr uski value m+1 put krdi hai
    }
    else{
        //go to left half
        return binarySearch(arr , key  , s , mid-1);
    }

    
}

int main()
{
    int arr[5] = {3 , 5 , 1 , 2 , 9};
    int n = 5 ;
    int key = 88 ; 
    int ans = binarySearch(arr , 4 ,0 ,key); //arr define its size , 
                                            // 0 defines starting element , 4 defines end which is n-1 

   cout<<"present or absent"<<" "<<ans<<endl;
//    if(ans)
//    {
//     cout<<"present"<<endl;
//    }
//    else{
//     cout<<"absent"<<endl;
//    }
}