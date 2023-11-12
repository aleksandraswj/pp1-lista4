#include <iostream>

using namespace std;

//2.2.28 Napisz funkcję rekurencyjną, która dla otrzymanej w argumentach
//pary nieujemnych liczb całkowitych n i m zwraca wartość f (n, m)
//gdzie funkcja f jest zdefiniowana w następujący sposób:
//f (n, 0) = n
//f (n, m) = f (m, n)
//f (n, m) = n − m + f (n − 1, m) + f (n, m − 1) dla n ≥ m > 0.

unsigned int funkcja(unsigned int n, unsigned int m)
{
    if (m==0)
    {
        return n;
    }
    else if (n>=m)
    {
        return n - m + funkcja(n-1, m) + funkcja(n, m-1);
    }
    else
    {
        return m - n + funkcja(m-1, n) + funkcja(m, n-1);
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
