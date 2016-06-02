#include <stdio.h>
 
int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    unsigned long long int ans = 0, i;
    unsigned long long int N;
    scanf("%llu", &N);
    unsigned long long int A[N];
    unsigned long long int B[N];
    for (i=0; i<N; i++) {
      scanf("%llu", &A[i]);
    }
    for (i=0; i<N; i++) {
      scanf("%llu", &B[i]);
    }
    if (B[0] <= A[0])
      ans++;
    for (i=1; i<N; i++) {
      if (B[i] <= (A[i] - A[i-1])) {
        ans++;
      }
    }
    printf("%llu\n", ans);
  }
  return 0;
}
