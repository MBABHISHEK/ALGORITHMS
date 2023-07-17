/*this program omputes the binomial coefficient with dynamic programming*/
/*formula used is c(n,k)=c(n-1,k-1)+c(n-1,k)*/


#include<stdio.h>
#include<stdlib.h>

int count=0;
int compute_binomial_dp(int n, int k) {
    int DP[n + 1][k + 1];

    // Initialize base cases
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j == 0 || j == i) {
                DP[i][j] = 1;
            } else {
                DP[i][j] = 0;
            }
        }
    }

    // Fill in the dynamic programming table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i && j <= k; j++) {
            count++;
            DP[i][j] = DP[i - 1][j - 1] + DP[i - 1][j];
        }
    }

    return DP[n][k];
}

int main() {
    int n,k;
    printf("ENTER THE VALUES OF M AND N\n");
    scanf("%d %d", &n, &k);
    count = 0;
    int result = compute_binomial_dp(n, k);
    printf("C(%d, %d) = %d\n", n, k, result);
    printf("THIS IS THE BASIC OPERATION COUNT IS %d\n", count);
    return 0;
}