                                //LEC - 34 DAY-4
                                //CODESTUDIO QNS - CHECK PALINDROME
#include<iostream>
using namespace std ;
bool checkPalindrome(string name , int i ,int j)
{
    //base case
    if(i>j)
    {
        return true;
    }
    //checking one part of string ...bhaki ka recursion sambhal lega 
    if(name[i] != name[j]) //checking 1st index of starting element n ending element.
    {
        return false ;
    }
    //recursive relation
    else{
        return checkPalindrome(name , i+1 , j-1);
    }
}
int main()
{
    string name = "shubham";
    bool ans = checkPalindrome(name , 0 , name.length()-1);
    if(ans){
        cout<<"its a palindrome"<<endl;
    }
    else{
        cout<<"no its not a palindrome"<<endl;
    }
}