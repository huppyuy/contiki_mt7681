int tolower(int c) {
 
  if(c<='Z' && c>='A') return (c+32);
  return (c);
   
}

int strncasecmp(const char *s1, const char *s2, unsigned int n)
{
         if (n == 0)
                 return 0;
 
         while ((n-- != 0)
                 && (tolower(*(unsigned char *) s1) ==
                         tolower(*(unsigned char *) s2))) {
                 if (n == 0 || *s1 == '\0' || *s2 == '\0')
                         return 0;
                 s1++;
                 s2++;
         }
 
         return tolower(*(unsigned char *) s1) - tolower(*(unsigned char *) s2);
}

int strcasecmp(const char *s1, const char *s2)
{
        const unsigned char
                        *us1 = (const unsigned char *)s1,
                        *us2 = (const unsigned char *)s2;

        while (tolower(*us1) == tolower(*us2++))
                if (*us1++ == '\0')
                        return (0);
        return (tolower(*us1) - tolower(*--us2));
}

#include <string.h>

/* Append at most Count chars of Str2 to Str1.
 */
char * strncat(char * pStr1, const char *pStr2, size_t Count)
{
    char * r = pStr1;
    char c;

    while (*pStr1 != '\0')
        pStr1++;

    while ((Count-- > 0) && ((c = *pStr2++) != '\0'))
        *pStr1++ = c;
    *pStr1++ = '\0';

    return r;
}
