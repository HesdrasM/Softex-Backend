#include <stdio.h>
#include <stdlib.h>

int main() {
    int bubbleSort[] = {1, 3, 10, 7, 5, 9, 4, 6, 2, 8};
    int i, confirmChange, auxChange;

    printf(" Antes de implementar o bubble sort: ");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ",bubbleSort[i]);
    }
    
    do
    {
        confirmChange = 0;

        for (i = 0; i <= 8; i++)
        {
            if (bubbleSort[i]>bubbleSort[i+1])
            {
                auxChange = bubbleSort[i];
                bubbleSort[i] = bubbleSort[i + 1];
                bubbleSort[i + 1] = auxChange;
                confirmChange = 1;
            }
        }
    } while (confirmChange == 1);

    printf("\nDepois de implementar o bubble sort: ");

    for (i = 0; i <= 9; i++)
    {
        printf("%d ",bubbleSort[i]);
    }
    
    return 0;
}