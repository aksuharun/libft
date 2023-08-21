#include "libft.h"

char    *ft_strrchar(const char *s, int c)
{
    int i;
    i = ft_strlen((char*)s);
    while (i != -1)
    {
        if(s[i] == c)
            return((char*)&s[i]);
        i--;
    }  
     return (NULL);
}
