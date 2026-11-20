#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;

    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be created");
        return 1;
    }

    printf("Enter text for the file:\n");

    while ((ch = getchar()) != EOF)
    {
        fputc(ch, fp);
    }

    fclose(fp);

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("\nContents of the file:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
# \include <stdio.h>
