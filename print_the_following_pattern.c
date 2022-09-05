#include <stdio.h>
 
int main()
{
    int rows, columns, n;
    scanf("%d",&n);
 
    // second for loop is used to identify number of rows
    for (rows=1; rows <= n; rows++) {
 
        // second for loop is used to identify number of
        // columns and here the values will be changed
        // according to the first for loop
        for (columns=1; columns <= rows; columns++) {
 
            // print the number to be print based on the
            // number of columns
            printf("%d", columns);
        }
        // print the next line
        printf("
");
    }
    return 0;
}
