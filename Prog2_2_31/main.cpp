#include <iostream>
using namespace std;

#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))

const double dokladnosc = 0.1;

double potega(double n, unsigned int m)
{
    double wynik=1;
    for (unsigned int i=0; i<m; i++)
    {
        wynik*=(double)n;
    }
    return wynik;
}

double pierwiastek(double n, unsigned int m, double xk)
{
    double x=((m-1)*xk+n/potega(xk,(m-1)))/m;
    cout << x << endl;
    if (x-xk<dokladnosc && x-xk>-dokladnosc)
    {
      return x;
    }
    else
    {
        return pierwiastek(n, m, x);
    }
}

double pierwiastek(unsigned int n, unsigned int m=2)
{
   return pierwiastek(n, m ,n);
}

int main(int argc, char* argv[])
{
    unsigned int narray[2];
    for(unsigned int i=1; i<=NELEMS(narray); i++ )
    {
        narray[i-1]=(i<argc ? atoi(argv[i]) : 2);
    }
     cout << pierwiastek(narray[0], narray[1]) << endl;
    return 0;
}
