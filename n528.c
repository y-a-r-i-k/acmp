#include <stdio.h>

int main() {
    unsigned long long n, k, s;
    scanf("%lld %lld", &n, &k);
    s = n*(1+k)*k/2-(k+1)*(k-1);
    printf("%lld", s);
}