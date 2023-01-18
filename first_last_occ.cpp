                                            //HOMEWORK QNS 

#include<iostream>
using namespace std ;

//first occurence -- yaha sbhse phele humne base case likha phir kuch process kiya phir recursive call kiya

int firstOccurence(int arr[] , int n  , int i , int key ) //int i is for traversing or u can say to return index
{
    //base case
    if(i==n) // agar array he khtm hogya 
    {
        return -1 ;//not found
    }

    if(arr[i] == key)
    {
        return i ;//element found
    }

    //recursive call - maine sirf ek he ko call kiya bhaki k recursion call krega 
    return firstOccurence(arr , n , i+1 , key) ;
}

//last occurence -- yaha hum sbhse phele base case phir recursive call phir kuch process karenge bcoz last occ chaiye

int lastOccurence(int arr[]  ,int n , int i , int key)
{
    //base case
    if(i==n) // agar array he khtm hogya 
    {
        return -1 ;
    }

    //recursive call
    int restArray = lastOccurence(arr , n , i+1 , key);

    //processing
    if(restArray != -1)
    {
        return restArray ;
    }
    if(arr[i] == key){
    return i ;
    }
    return -1 ;
}

int main()
{
    int arr[5] = {1, 23, 45 , 23 , 99} ;
    int n =5 ;
    cout<<firstOccurence(arr , n , 0 ,66)<<endl;
    cout<<lastOccurence(arr , n , 0 ,66)<<endl;
}