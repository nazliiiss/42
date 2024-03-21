#include <unistd.h>
void ft_print(int nb)
{
    if(nb > 15)
        ft_print(nb / 16);
    write(1, &"0123456789abcdef"[nb % 16], 1);
}
int ft_atoi(char *str)
{
    int r= 0;
    int i= 0;
    while(str[i] > 32)
    {
        r = r * 10 + ( str[i] - 48);
        i++;
    }
    return(r);
}
int main(int ac, char **av)
{
    if(ac == 2)
        ft_print((ft_atoi(av[1])));
    write(1, "\n", 1);
}