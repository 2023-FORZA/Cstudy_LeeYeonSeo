#include <stdio.h>


long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}


long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        long long A, B; 
        scanf("%lld %lld", &A, &B);

        
        printf("%lld\n", lcm(A, B));
    }

    return 0;
}
