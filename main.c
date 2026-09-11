#include <stdio.h>
#include <string.h>

int eng_Katta(int arr[], int n, int target)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > target)
        {
            return i;
        }
    }
    return -1;
}

int eng_Kichik(int arr[], int n, int target)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] < target)
        {
            return i;
        }
    }
    return -1;
}

void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void takrorlarni_ochirish(int arr[], int n)
{

    bubble_sort(arr, n);
    int takror_massiv[6];
    memcpy(takror_massiv, arr, n * sizeof(int));
    int takrorsiz_massiv[7];
    int k = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != arr[i - 1])
        {
            
            takrorsiz_massiv[k] = arr[i];
            k++;
        }

        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == takror_massiv[j])
            {
                count++;
            }
        }

        printf("%d--%d\n",arr[i],count);
       

    }
    for (int i = 0; i < k; i++)
       {
        printf("%d",takrorsiz_massiv[i]);
       }

    
}

void mashq1(void)
{

    int massiv[] = {1, 2, 3, 2,5, 7, 9};
    int n = sizeof(massiv) / sizeof(massiv[0]);

    int target = 5;

    int natija = eng_Kichik(massiv, n, target);

    printf("\n%d\n", natija);

    int natija1 = eng_Katta(massiv, n, target);

    printf("\n%d\n", natija1);

    takrorlarni_ochirish(massiv, n);
}

int main(void)
{
    mashq1();

    return 0;
}