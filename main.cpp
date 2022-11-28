#include <iostream>
using namespace std;
int fibonacci(int n) {
    int a = 0, b = 1, c=0;
    cout << 1 << endl;
        for (int i = 2;; i++) {
          c=a+b;
          a=b;
          b=c;
         if(c>n)break;
           cout << c << endl;
        }
    }

    int main() {
        int n = 0;
        cin >> n;
            fibonacci(n);
        return 0;
    }
