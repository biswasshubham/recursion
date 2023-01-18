#include<iostream>
using namespace std ;
string removeDuplicate(string str )
{
    //base case 
    if(str.length() == 0)
    return "";

    //processing
    char ch = str[0] ; //0th index 'a'
    string ans = removeDuplicate(str.substr(1)); //starting with 1st index bcoz 0th index toh upar leliya

    //recursive relation

    if(ch == ans[0])
    {
        return ans ;
    }
    else
    {
        return ch+ans ;
    }
    
    
}

int main()
{
    string str ="aaaaabbbbbccccddddef" ;
   cout<< removeDuplicate(str)<<endl ;
}