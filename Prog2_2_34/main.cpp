#include <iostream>
#include <string.h>

using namespace std;

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

unsigned int iloczyn (unsigned int n1, unsigned int n2=1, unsigned int n3=1, unsigned int n4=1, unsigned int n5=1)
{
    return n1*n2*n3*n4*n5;
}

int main(int argc, char* argv[])
{
    unsigned int narray[5];
    for(unsigned int i=1; i<=NELEMS(narray); i++ )
    {
        narray[i-1]=(i<argc ? atoi(argv[i]) : 1);
    }
    cout << iloczyn(narray[0], narray[1], narray[2], narray[3], narray[4]) <<endl;
    return 0;
}
