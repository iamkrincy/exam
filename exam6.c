#include <stdio.h>
#include <string.h>

main() 
{
    int n, i;
    printf("Enter the number of employees= ");
    scanf("%d", &n);

    FILE *fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error: Unable to open file.\n");
    }

    for (i = 0; i < n; i++) {
        char name[100], role[100];
        printf("\nname of employee %d= ", i+1);
        scanf("%s", name);
        printf("role of employee %d= ", i+1);
        scanf("%s", role);

        fprintf(fp, "%s %s\n", name, role);
    }

    fclose(fp);
    printf("Data written to file successfully.\n");
}