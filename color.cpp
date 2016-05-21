#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int t;
    scanf("%d", &t);
    unsigned long long int n, ans, r, g, b;
    while(t--) 
    {
        ans = r = g = b = 0;
        scanf("%llu", &n);
        char S[n];
        scanf("%s", &S);
        for(int i=0; i<n; i++) 
        {
            if (!(S[i] == 'R')) r++;
            if (!(S[i] == 'G')) g++;
            if (!(S[i] == 'B')) b++;
        }
        if (r < g) 
        {
            if (r < b)
                printf("%llu\n", r);
            else
                printf("%llu\n", b);
        }
        else 
        {
            if (g < b)
                printf("%llu\n", g);
            else
                printf("%llu\n", b);
        }
    }
    return 0;
} 