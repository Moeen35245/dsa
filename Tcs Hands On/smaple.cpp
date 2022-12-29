#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // means only one argument   exist that is file.exe
    if (argc == 1)
    {
        printf("No command line argument exist Please provide them first \n");
        return 0;
    }

    else
    {
        int i;
        // actual arguments starts from index 1 to (argc-1)
        for (i = 1; i < argc; i++)
        {
            int value = atoi(argv[i]);
            // print value using stdio.h library's printf() function
            printf("%d\n", value);
        }
        return 0;
    }
}