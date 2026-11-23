#include <stdio.h>

int main(void)
{
    long n,g;
    long loop;
    g = 0;
    scanf("%ld", &n);
    /* TODO: n が負なら NG、そうでなければ 1+2+...+n を for 文で計算して表示 */
if  (n>=0)
    {
    for (loop=1;loop<=n;loop++)
      g = g + loop;//
    
    
    }
else
    {
     printf("NG");   
    };
    printf("%ld", g);
    return 0;
};
