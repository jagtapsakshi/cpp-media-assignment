#include <iostream>
using namespace std;
int main()
{
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout<<i;
}

/* acc to hierarchy 
   1)parentheses is solved first
   2)solve 7/5 = 1 hence gives 1 as integer value is returned
   3)solve 1*6*6 = 36
   4)solve 4+36+6+9
   5)ans 58
*/
