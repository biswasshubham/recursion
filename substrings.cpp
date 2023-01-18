// IMP QNS

#include <iostream>
using namespace std;
void substring(string str, string ans) // string ans voh hai joh hume last mh print karna padega jbh ans aajayega
{
    // base case
    if (str.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    // processing
    char ch = str[0]; // indicating 1st index
    string restOfString(str.substr(1));

    // recursive call
    substring(restOfString, ans);      // excluding case --not adding anything
    substring(restOfString, ans + ch); // including case --adding
}
int main()
{
    string str = "ABC";
    substring(str, "");
}