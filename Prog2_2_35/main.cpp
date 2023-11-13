#include <iostream>

using namespace std;

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

bool jestPodzielna(unsigned int m, unsigned int n=2)
{
   return m%n==0;
}

int main(int argc, char* argv[])
{
    unsigned int narray[2];
    for(unsigned int i=1; i<=NELEMS(narray); i++ )
    {
        narray[i-1]=(i<argc ? atoi(argv[i]) : 2);
    }
    cout << jestPodzielna(narray[0], narray[1]) <<endl;
    return 0;
}
