int main()
{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",'A'-1 + i);
        }
            printf("\n");
    }
    return 0;
}
