                            //LEC - 32 RECURSION DAY-2

#include<iostream>
using namespace std ;
int fibonaccii(int n )
{
    //base case
    if(n==0)
    {
        return 0 ;
    }
    if(n==1)
    {
        return 1 ;
    }
    //recursive call - maine ek case ko call krdiya bhaki k recursion khud karega
    else
    {
        return fibonaccii(n-1) + fibonaccii(n-2);
    }
}

int main()
{
    int n ;
    cin>>n ;
   

   int ans =  fibonaccii(n);
   cout<<"element present in index"<< n <<"is"<<" "<<ans<<endl;
}