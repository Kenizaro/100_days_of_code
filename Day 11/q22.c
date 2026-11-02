#include <stdio.h>

int main()
{
    float cp, sp, p;

    scanf("%f %f", &cp, &sp);

    if(sp > cp)
    {
        p = ((sp - cp) / cp) * 100;
        printf("Profit %.0f%%", p);
    }
    else if(cp > sp)
    {
        p = ((cp - sp) / cp) * 100;
        printf("Loss %.0f%%", p);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
