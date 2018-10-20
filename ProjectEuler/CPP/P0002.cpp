/* Each new term in the Fibonacci sequence is generated by adding the previous two terms.
   By starting with 1 and 2, the first 10 terms will be:
   1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
   By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int f1 = 2, f2 = 3, sum = 2;
    for (int i = 3, temp; i < 4000000; i=f1+f2) {
        temp = f1+f2;
        if (temp % 2 == 0)
            sum += temp;
        f1 = f2;
        f2 = temp;
    }
    cout << sum << endl;
    return 0;
}
