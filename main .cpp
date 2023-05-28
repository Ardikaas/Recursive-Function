#include <iostream>

using namespace std;

int fact_rec(int n){
  if (n < 0){
    return 0;
  }else if (n == 0){
    return 1;
  }else if (n == 1){
    return 1;
  }else {
    return n* fact_rec(n-1);
  }
}

int fibo_r (int x){
  if (x == 1){
    return 1;
  }else if (x == 2){
    return 1;
  }else {
    return fibo_r(x-1) + fibo_r(x-2);
  }
}

int main(int argc, char const *argv[])
{
  int fac;
  cout << "Masukkan berapa faktorial : ";
  cin >> fac;
  cout << "Hasil faktorial dari " << fac << " adalah : ";
  cout << fact_rec(fac);

  int fib;
  cout << "\n\nMasukkan deret fibonacci : ";
  cin >> fib;
  cout << "Hasil : ";
  cout << fibo_r(fib);
  return 0;
}
