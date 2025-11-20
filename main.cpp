/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int accumulate(int n);

int main() {
    int number = 100;
    cout << "從1加到" << number << "總合為: " << accumulate(number);
    return 0;
}

int accumulate(int n) {
    if (n == 1) {
        return 1;
    }
    return n + accumulate(n - 1);
}
