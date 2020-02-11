//http://www.cplusplus.com/doc/tutorial/preprocessor/
#include "include.hpp"
#define TABLE_SIZE 200
int main()
{
    cout<<TABLE_SIZE<<endl;

    #if TABLE_SIZE > 100
    #undef TABLE_SIZE
    #define TABLE_SIZE 100
     cout<<TABLE_SIZE;
    #endif // TABLE_SIZE
}
