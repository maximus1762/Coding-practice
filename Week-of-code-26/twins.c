//https://www.hackerrank.com/contests/w26/challenges/twins
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int l, h, n, ans, i;
    scanf ("%d %d", &l, &h);
    ans = 0;
    n = 0;
    if (l <= 3)
        ans++;
    while (n<l)
        n += 6;
    while (n < h) {
        i = 1;
        int flag = 0;
        while (i * i < n + 1) {
            i++;
            if ((n - 1) % i == 0 || (n + 1) % i == 0)
                flag = 1;
        }
        if (!flag)
            ans++;
        n += 6;
    }
    printf("%d",ans);
}
