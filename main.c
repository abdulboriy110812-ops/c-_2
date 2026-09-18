#include <stdio.h>
#include <string.h>

// int swap(int *a, int *b)
// {

//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void mashq1(void)
// {

//     int a;
//     int b;
//     printf("a va b sonini kiriting: ");
//     scanf("%d %d", &a, &b);

//     if (a > b)
//     {
//         printf("Almashtirildi: a=%d,b=%d", b, a);
//     }
//     else
//     {
//         printf("Tartib togri: a=%d,b=%d", a, b);
//     }

//     swap(&a, &b);
// }

// void sum_avg(int arr[], int n, int *sum, double *avg)
// {

//     for (int i = 0; i < n; i++)
//     {
//         *sum += arr[i];
//     }
//     printf("\nYigindisi:%d\n", *sum);
//     *avg = (double)*sum / n;
//     printf("Elemntlar ning ortacha qiymati:%.1f", *avg);
// }

// void mashq2(void)
// {

//     int arr[] = {5, 8, 2, 10, 19, 21, 27};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 0;
//     double avg = 0;

//     sum_avg(arr, n, &sum, &avg);
// }

// void min_max(int arr[], int n, int *min, int *max)
// {

//     for (int i = 0; i < n; i++)
//     {
//         if (*min > arr[i])
//         {
//             *min = arr[i];
//         }
//         else if (*max < arr[i])
//         {
//             *max = arr[i];
//         }
//     }

//     printf("\nMin:%d", *min);
//     printf("\nMax:%d\n", *max);
// }

// void mashq3(void)
// {

//     int arr[] = {5, 8, 2, 10, 19, 21, 27};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0];
//     int max = arr[0];

//     min_max(arr, n, &min, &max);
// }

struct Talaba
{
    char name[50];
    int age;
    double score;
};

void mashq4(void)
{

    struct Talaba t1;
    struct Talaba t2;
    struct Talaba t3;

    char ism[40];
    int yosh;
    double baho;

    for (int i = 0; i <= 2; i++)
    {
        printf("Ism kiriting:");
        scanf("\n%s", ism);
        printf("Yosh kiriting:");
        scanf("\n%d", &yosh);
        printf("Baho kiriting:");
        scanf("\n%lf", &baho);

        if (i == 0)
        {
            strcpy(t1.name, ism);

            t1.age = yosh;
            t1.score = baho;
        }
        else if (i == 1)
        {
            strcpy(t2.name, ism);

            t2.age = yosh;
            t2.score = baho;
        }
        else
        {

            strcpy(t3.name, ism);

            t3.age = yosh;
            t3.score = baho;
        }
    }

    printf("\n\nTalaba ism:%s\nTalaba yoshi:%d\nTalaba baxosi:%.1f\n", t1.name, t1.age, t1.score);

    printf("\n\nTalaba ism:%s\nTalaba yoshi:%d\nTalaba baxosi:%.1f\n", t2.name, t2.age, t2.score);

    printf("\n\nTalaba ism:%s\nTalaba yoshi:%d\nTalaba baxosi:%.1f\n", t3.name, t3.age, t3.score);
}

int main(void)
{

    // mashq1();
    // mashq2();
    // mashq3();
    mashq4();

    return 0;
}