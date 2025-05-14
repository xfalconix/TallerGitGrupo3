void ft_putstr(char *str)
{
    while (*str)
    {
        putchar(*str);
        str++;
    }
}
