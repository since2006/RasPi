/*
 * string_ex.c
 *
 *  Xuz on 2014-12-21
 */

int startWith(const char *prefix, const char *str)
{
    int lenpre = strlen(prefix);
    int lenstr = strlen(str);

    return lenstr < lenpre ? 0 : strncmp(prefix, str, lenpre) == 0;
}
