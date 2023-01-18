                                    //LEC - 31 RECURSION DAY-1
                                    // give ans as 2 raise to the power eg.2 raised to 6 is 64 
#include<iostream>
using namespace std ;
int power(int n )
{
    //1)base case
    if(n==0)
    return 1; //2 raised to zero is 1 .
    
    // recursive relation.
    else
    {
        return 2*power(n-1); // 2 raised to 
    } 
}
int main()
{
    int n ;
    cin>>n ;

    cout<<power(n)<<endl;
}