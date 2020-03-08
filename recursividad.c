#include<stdio.h>

long result;
int n;

long factorial(int n)
{
    if(n == 0)
        return(1);
    else
    {
        return(n*factorial(n-1));
    }
    
}

int main(int argc, char const *argv[])
{
    printf("Ingrese el numero a calcular: \n");
    scanf("%i", &n);

    while(n < 0)
    {
        printf("El numero debe ser mayor a 0: \n");
        scanf("%i", &n);
    }
    
    result = factorial(n);
    printf("%d! = %ld\n", n, result);
      
    
    return 0;
}
