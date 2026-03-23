#include <stdio.h>

int main()
{
    int arr[3][3], sum1 = 0, sum2 = 0, r ;
    printf("Enter square matrix: ");
    scanf("%d",&r);
    printf("Enter value of array row and colum: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {

            scanf("%d",&arr[i][j]);
        }
    }

    // for  first diagonal elemant

    printf("\nfirst diagonal elemant: ");
    for (int i = 0; i < r; i++)
    {

        printf("%d ", arr[i][i]);
        sum1 += arr[i][i]; // Sum of first diagonal elemant
    }

    printf("\nSum of first diagonal elemant: %d\n", sum1);

    // for secand diagonal elemant

    printf("\nfirst diagonal elemant: ");
    for (int i = 0; i < r; i++)
    {

        printf("%d ", arr[i][r - i - 1]);
        sum2 += arr[i][r - i - 1]; // Sum of first diagonal elemant
    }
    printf("\nSum of first diagonal elemant: %d", sum2);

    return 0;
}
