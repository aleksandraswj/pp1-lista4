#include <iostream>

using namespace std;

//2.2.22 Napisz rekurencyjną funkcję zwracającą dla otrzymanej w argumencie
//nieujemnej liczby całkowitej n wartość elementu o indeksie n ciągu
//zdefiniowanego w następujący sposób:
//a0 = a1 = 1
//an = an−1 + 2 ∗ an−2 + 3 dla n > 1

unsigned int rek(unsigned int n)
{
    if (n<=1)
    {
        return 1;
    }
    else
    {
        return rek(n-1) + 2*(rek(n-2))+3;
    }
}

int main()
{
    unsigned int n;
    cin >> n ;
    cout << rek(n) << endl;
    return 0;
}
