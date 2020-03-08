#include <stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return(1);
    }

    return(n*fact(n-1));
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Dame el valor de n para obtener su factorial: \n");
    scanf("%i", &n);
    int result = fact(n);

    printf("\nEl resultado es: %i\n", result);

    return 0;
}
