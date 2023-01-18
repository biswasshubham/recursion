                                // LEC - 34 DAY -4
#include<iostream>
using namespace std ;
void reverse(string &name , int start , int end )//pass by ref bcoz varna copy baan jati 
{
    //base case
    if(start>end)
    return ;

    //processing
    swap(name[start], name[end]);
    start++;
    end--;


    //recursive relation
    reverse(name , start , end);
}
int main()
{
    string name = "shubham";
    reverse(name , 0 , name.length()-1 );
    cout<<endl;
    cout<<"reverse name is "<<name<<endl;
}