#include <iostream>

using namespace std;

//2.2.27 (r) Napisz funkcję rekurencyjną, która dla otrzymanej w argumentach
//pary nieujemnych liczb całkowitych n i m zwraca wartość f (n, m)
//gdzie funkcja f jest zdefiniowana w następujący sposób:
//f (n, 0) = n
//f (0, m) = m
//f (n, m) = f (n − 1, m) + f (n, m − 1) + f (n − 1, m − 1) dla n, m > 0.

unsigned int funkcja(unsigned int n, unsigned int m)
{
    if (m==0)
    {
        return n;
    }
    else if (n==0)
    {
        return m;
    }
    else
    {
        return funkcja(n-1, m)+ funkcja (n, m-1)+ funkcja(n-1, m-1);
    }
}

int main()
{
    unsigned int n;
    unsigned int m;
    cin >> n >> m;
    cout << funkcja(n, m) << endl;
    return 0;
}
