#include<iostream>
#include<algorithm>
#include<numeric>
#include<limits.h>
#include<string>
#include<vector>
using namespace std;
uint32_t rot1(uint32_t value, unsigned int countt)
{
    const uint32_t mask= (CHAR_BIT *sizeof(value)-1);
    countt &=mask;
    return (value << countt) | (value >> ((-countt)&mask));

}
uint32_t makeHash(uint32_t Hash,char c)
{
    Hash =rot1(Hash,c);
    Hash^=c;
    return Hash;
}

class HashString //As we call its object/constructor then it return hash value
{
    public:
    uint32_t Hash=0;
    void operator()(const string str)
    {
        Hash=accumulate(str.begin(),str.end(),Hash,makeHash);
        //cout<<Hash<<" ";

    }


};
template <class T>
uint32_t hash_genrator(T &v)
{
    HashString finalHash=for_each(v.begin(),v.end(),HashString()); //Since for each has eturn ytyoe same as HashString so we can access
    finalHash.Hash;
}

int main()
{
    vector<string> v={"abc","pqr"};
    uint32_t Hash=hash_genrator(v);
    cout<<Hash;


}

