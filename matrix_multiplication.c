#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[3][3];
    int o = 0, k = 0, *dma;
    int result[3][3];
    dma = (int *)calloc(27, sizeof(int));
    // >>>>>>>>>>>>>>>>Input value from user<<<<<<<<<<<<<<
    printf("\n<<<<<>>>>> enter values in 1st matrix <<<<<>>>>>\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value at element [%d][%d] ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n<<<<<>>>>> enter values in 2nd matrix <<<<<>>>>>\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter value at element [%d][%d] ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    // >>>>>>>>>>>>>>>>>multiplication of matrix a and b:<<<<<<<<<<<<<<<<<<<<
    for (int mn_loop = 0; mn_loop < 3; mn_loop++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int x, y;
                x = a[mn_loop][j];
                y = b[j][i];
                dma[o] = x * y;
                o++;
            }
        }
    }

    //----------------------ADDITION AFTER MULTIPLICATION--------------------//

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = dma[k] + dma[k + 1] + dma[k + 2];
            k = k + 3;
        }
    }
    free(dma);
    dma = NULL;

    //----------------------RESULT--------------------//

    for (int i = 0; i < 3; i++)
    {
        printf("\n|%d %d %d|\n", result[i][0], result[i][1], result[i][2]);
    }
    return 0;
}
