#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int r = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 +(str[i] - 48);
        i++;
    }
    return(r);
}
void ft_print(int n)
{
    if(n > 9)
        ft_print(n / 10);
    write(1, &"0123456789"[n % 10], 1);
}

int isprime(int c)
{
    int i = 2;
    if(c <= 1)
        return 0;
    while(c > i)
    {
        if(c % i == 0)
            return(0);
        i++;
    }    
    return(1);
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int r = 0;
        int a = ft_atoi(av[1]);
        while(a > 0)
        {
            if(isprime(a))
                r += a;
            a--;
        }
        ft_print(r);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}