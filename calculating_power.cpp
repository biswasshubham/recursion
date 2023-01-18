                            //LEC - 34 DAY-4
                            // calculating power means 2raised to 11 is 1024.
#include<iostream>
using namespace std;
int power(int a , int b ) // a stands for the number , b stands for the power
{
    //base case 
    if(b==0) // anything to the power 0 is 1 ...eg. 2 raised to zero is 1 
    {
        return 1;
    }
    if(b==1) // anything to the power 1 is the number itself ...eg. 2 raised to one  is two 
    {
        return a ;
    }

    //recursive relation ---ek chj ko bulao bhaki ka recursion sambhal lega 
    int ans = power(a , b/2 );
    
    if(b%2==0) // even case
    {
        return ans * ans ; //ek even case ka ans mh nikal rha hu bhaki ka recursion nikalegab
    }
    else // odd case
    {
        return a * ans * ans ;
    }
    
}
int main()
{
    int a =3 , b = 2 ;
    
    int ans = power(a, b);
    cout<<ans<<endl;
}