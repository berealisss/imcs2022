#include <stdio.h>

int main() {
	  int M, K, P, Z, F;
 
    scanf(“%d”, &M);
    scanf(“%d”, &K);
    scanf(“%d”, &P);
    scanf(“%d”, &Z);
    scanf(“%d”, &F);

    int D = M / (P * 2 * K + Z * 9 * K + F * 24 * K);
    printf("%d", D);

    return 0;
}
