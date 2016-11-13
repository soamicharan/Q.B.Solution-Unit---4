#include<stdio.h>
#include<conio.h>
int main()
{
struct studentinfo
{
    char name[50];
    int age;
    char gender;
    int any;
    char classs[20];
    struct DOB
    {
        int day;
        int month;
        int year;
    }stud[10];
}stu[10];
 int a;
 for(a=0;a<10;a++)
 {
     printf("Enter info of student %d.\nName - ",a+1);
     scanf(" %50[^\n]", &stu[a].name);
     printf("Age - ");
     scanf("%d",&stu[a].age);
     printf("Gender - ");
     scanf("%s",&stu[a].gender);
     printf("Class - ");
     scanf(" %20[^\n]",&stu[a].classs);
     printf("Date of Birth -\nDay - ");
     scanf("%d",&stu[a].stud[a].day);
     printf("Month - ");
     scanf("%d",&stu[a].stud[a].month);
     printf("Year - ");
     scanf("%d",&stu[a].stud[a].year);
 }
 printf("\nEntered Information of Students - ");

 for(a=0;a<10;a++){
    printf("\nName - %s\nAge - %d\nGender - %c\n",stu[a].name,stu[a].age,stu[a].gender);
    printf("Class - %s\nDOB - %d - %d - %d\n",stu[a].classs,stu[a].stud[a].day,stu[a].stud[a].month,stu[a].stud[a].year);
 }
 getch();
}
