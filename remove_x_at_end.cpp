                                //REMOVE ALL THE X AT THE END OF THE STRING

#include<iostream>
#include<cstring>
using namespace std ;
string removeX(string name)
{
    //base case
    if(name.length() == 0 )
    {
        return "";
    }

    //process
    char ch = name[0] ; //first letter 's' 
     string ans = removeX(name.substr(1));

    //recursive call
    if(ch == 'x')
    {
        return ans + ch ; //ans + ch ..isliye kiya bcoz 'x' joh hai last mh chaiye 
    }
    else    //ch != x
    {
        return ch + ans ; //means jaisa hai vaise 
    }
}
int main()
{
    string name = "sxhxuxbxhxaxmx" ;
    cout<<removeX(name) ;
}