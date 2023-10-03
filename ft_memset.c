void ft_memset(char *p, char c, size_t n)
{
    int i;

    i = 0;
    while(i < n)
    {
        p[i] = c;
        i++;
    }
}