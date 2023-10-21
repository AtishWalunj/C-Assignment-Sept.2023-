#include <iostream>
using namespace std;

int main()
{
    char string1[50],string2[50],*str1,*str2;
//    int i,equal = 0;

   cout<<"Enter The First String: ";
    cin>>string1;

    cout<<"Enter The Second String: ";
    cin>>string2;

    str1 = string1;
    str2 = string2;

    while(*str1 == *str2)
    {
        if ( *str1 == '\0' || *str2 == '\0' )
            break;

        str1++;
        str2++;
    }

    if( *str1 == '\0' && *str2 == '\0' )
        cout<<"Both Strings Are Equal.";
    else
        cout<<"Both Strings Are Not Equal.";
}
