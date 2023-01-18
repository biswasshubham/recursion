                                    //REPLACE PIE WITH 3.14

#include<iostream>
using namespace std ;
void replacePi(string str)
{
    //base case
    if(str.length()==0)
    {
        return ;
    }

    //recursive realtion
    if(str[0] =='p' && str[1] =='i')
    {
        cout<<"3.14"<<endl;
        replacePi(str.substr(2)) ; //substr means the location from where to start ...here in dis case i have to start eith the 2nd index  
    }
    else
    {
        cout<<str[0] ;
        replacePi(str.substr(1));
    }
}

int main()
{
    string str = "pipppiiipi" ;
    replacePi(str);
}