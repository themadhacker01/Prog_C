 #include <stdio.h>
 int main (void)
{
    int n=0, i=0, j=0;
    printf("enter n = ");
    scanf("%d", &n);

    for(i=1 ; i <= n ; i++)
    {
        for(j=1 ; j<=i ; j++)
            printf("#");


        printf("\n");
    }
}
