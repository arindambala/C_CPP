void encrypt(char *message)
{
    char c;

    while (*message)
    {
        *message = *message ^ 3;
        message++;
    }
}