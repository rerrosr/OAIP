#include <stdio.h>
#define PI 3.1415
#include <math.h>
#include <stdbool.h>

void task1 ( ) {
    int h, rad;
    float arb, ar, v;
    printf("Enter height:\n");
    scanf("%d", &h);
    printf("Enter radius:\n");
    scanf("%d", &rad);
    arb = 2 * h * rad * PI;
    printf("Lateral area: %.2f\n", arb);
    ar = 2 * PI * rad * (rad + h);
    printf("Area: %.2f\n", ar);
    v = PI * h * pow(rad, 2);
    printf("Volume: %.2f\n", v);
}
void task2 () {
    int m, n, p;
    int k = 0;
    printf("Enter numbers: ");
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);
    if (m < 0) k++;
    if (n < 0) k++;
    if (p < 0) k++;
    if (k==0)
        printf("No negative numbers \n" );
    else {
    printf("Negative numbers: %d \n", k);
}
}
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y)
{
    float A = area (x1, y1, x2, y2, x3, y3);
    float A1 = area (x, y, x2, y2, x3, y3);
    float A2 = area (x1, y1, x, y, x3, y3);
    float A3 = area (x1, y1, x2, y2, x, y);
    return (A == A1 + A2 + A3);
}
void task3 () {
    if (isInside(0, 0, 20, 0, 10, 30, 10, 15))
        printf ("Inside\n");
    else
        printf ("Not Inside\n");
}
void task4 (){
    int age;
    printf ("Enter your age: \n");
    scanf("%d",&age);
    if (age >4 && age <10)
        printf("mne %d let\n", age);
    if (age >1 && age <5)
    printf("mne %d goda\n", age);
    if (age ==1)
        printf("mne %d god\n", age);
    if (age > 10)
        printf("incorrectly entered data\n");
}
int main () {
    int i=0 ;
    while (i!=5)
    {
        printf("Enter the task number:\n");
        printf("If you want exit print 5:\n");
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
                break;
            }
            case 3:
            {
                printf("task3\n");
                printf("\n");
                task3();
                break;
            }
            case 4:
                {
                    printf("task4\n");
                    printf("\n");
                    task4();
                    break;
                }
            default:
            {
                printf("Task not found,try again\n");
                break;
            }
        }
    }
    return 0;
}





