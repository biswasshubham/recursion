                                 //LEC - 32 RECURSION DAY-2
                                //CODESTUDIO QNS ..COUNT STAIRS
#include<iostream>
using namespace std ;
int countStairs(int n )
{
    //base case
    if(n < 0) //undergrnd or basement
    {
        return 0 ;
    }
    if(n==0) //same stair case 
    {
        return 1 ;
    }
    //recursive relation 
    else
    {
        return countStairs(n-1) + countStairs(n-2); //pichle do stairs ka add 
    }
}

int main()
{
    int n ;
    cin>>n ;
   cout<<countStairs(n)<<endl;

//    int ans =  countStairs(n);
//    cout<<ans<<endl;
}