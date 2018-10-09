#include<stdio.h>
struct student
{
    int i;
    char n[30];
    float m;
};
int main()
{
    struct student s1;
    scanf ("%d%s%f",&s1.i,&s1.n,&s1.m);           //taking data from keyboard
    struct student s2 = {49, "Sumaiya", 95.0};
    struct student s4 = {12, "Tanjina", 70.00};
    struct student s3 = {86, "Jinnat", 80.00};
    printf("Records of student 1 :\nID : %d\nName : %s\nMarks : %.2f\n", s1.i, s1.n, s1.m);
    printf("\nRecords of student 2 :\nID : %d\nName : %s\nMarks : %.2f\n", s2.i, s2.n, s2.m);
    printf("\nRecords of student 3 :\nID : %d\nName : %s\nMarks : %.2f\n", s3.i, s3.n, s3.m);
    printf("\nRecords of student 4 :\nID : %d\nName : %s\nMarks : %.2f\n", s3.i, s3.n, s3.m);
    return 0;
}
