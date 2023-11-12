#include <iostream>
#include <string.h>

using namespace std;

unsigned int maksimum (unsigned int n1, unsigned int n2=0, unsigned int n3=0, unsigned int n4=0, unsigned int n5=0)
{
    return max(n1, max(n2, max(n3, max(n4, n5 ))));
}

int main(int argc, char* argv[])
{
    unsigned int narray[5];
    memset(narray, 0, sizeof(narray));
    for(int i=1; i<argc; i++ )
    {
        narray[i-1]=atoi(argv[i]);
    }
    cout << maksimum(narray[0], narray[1], narray[2], narray[3], narray[4]) <<endl;
    return 0;
}
