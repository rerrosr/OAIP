#include <stdio.h>
#include <math.h>

void task1() {
    int sum, a, b;
        printf("Enter sum>7\n");
        scanf("%d", &sum);
        if (sum < 7)
            printf("enter a number greater than 7\n");
        else {
        for (b = 0; b < sum; b++) {
            a = (sum - (5 * b)) / 3;
            if (a >= 0 && b >= 0 && a % 1 == 0 && sum == 3 * a + 5 * b)
                printf("a= %d, b= %d\n", a, b);
        }
        }
    }
void task2 () {
    int s1=0,s2=0;
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n=6;
        for (int i = 0; i < n; ++i) {
            if (arr[i] % 2 == 0)
                s1 += arr[i] * arr[i];
            s2 += arr[i] * arr[i] * arr[i];
        }

    printf("sum of square:%d \n",s1);
    printf("sum of cube:%d\n",s2);
    printf("\n");
    }

void task3 (){
       float x;

    printf("X:\n");
    scanf("%f",&x);

       int n;

    printf("N:\n");
    scanf("%i",&n);

       float c=0, b=1,e;
       int i;
    for (i=1; i<=x; i++) {
        b*=(i+i)*(1+2*i);
        c=c+((pow(-1,i))*(pow(n,((2*i)+1)))/b);
        e=c+n;
    }
    printf("result: %4f \n", e);
}
int main () {
    int i=0 ;
    while (i!=5)
    {
        printf("Enter the task number:\n");
        printf("If you want exit print 4:\n");
        scanf("%d", &i);
        printf("\n");
        switch (i) {
            case 1:
            {
                printf("task1\n");
                printf("\n");
                task1();
                break;
            }
            case 2:
            {
                printf("task2\n");
                printf("\n");
                task2();
                break;}
            case 3:
            {
                printf("task3\n");
                printf("\n");
                task3();
                break;}
                default:
                {
                    printf("Task not found,try again\n");
                    break;
                }
            }
        }
        return 0;
    }