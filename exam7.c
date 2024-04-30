#include <stdio.h>

main()
 {
    int i, j, n = 10;
    for (i=1; i<=5; i++) {
        for (j=1; j<=i; j++) 
		{
            printf("%d ", (n - i + 1) * (n - i + 1));
        }
        printf("\n");
    }
}