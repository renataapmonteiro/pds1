void imprimeASC()
{
    char name[] = "Renata";
    int i = 0;

    printf("O valor ASCII de %s :", name);

    while (name[i])
    {
        printf(" %d", name[i++]);
    }
}