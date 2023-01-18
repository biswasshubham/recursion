                 //LEC - 31 RECURSION DAY-1
#include<iostream>
using namespace std ;
int getcount(int n )
{
    //base case
    if(n==0)
    {
        return 0 ;
    }
    else
    {
        cout<<n<<endl;//-->to print in descending order

        //recursive relation ..
        getcount(n-1);

       // cout<<n<<endl; --> to print in ascending order
    }
}

int main()
{
    int n ;
    cin>>n ;
    cout<<endl;

   int ans =  getcount(n);
   cout<<ans<<endl;
}