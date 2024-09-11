#include <cstdlib>
#include <iostream>
using namespace std;
unsigned long long Faktorial(int n)
{
         if(n == 1)
         {
         return 1;
         }
         else
         {
         return n * Faktorial(n - 1);
         }
         }
         int main () {
             int n;
             cout << "Masukkan Nilai Yang Dicari: ";
             cin >> n;
             cout << "Faktorial dari " << n << " = " << Faktorial(n) << endl;
     system ("PAUSE");
     return 0;
     }

              
