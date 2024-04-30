#include <stdio.h>

main()
{
    int num;

    printf("Enter a number= ");
    scanf("%d", &num);

    switch (num > 0)
    {
        case 1:
            printf("%d is a positive number.\n", num);
            break;
        case 0:
            switch (num < 0)
            {
                case 1:
                    printf("%d is a negative number.\n", num);
                    break;
                case 0:
                    printf("%d is zero.\n", num);
                    break;
            }
            break;
    }
}