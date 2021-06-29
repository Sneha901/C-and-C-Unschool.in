#include <stdio.h>
struct employee
{
    char name[50];
    char employeeID[20];
    float experience;
    float salary;
}s[100];

void main()
{
    printf("Enter Information--> \n");
    for(int i=0;i<5;i++){
        printf("Enter Details of Employee- %d \n",i+1 );
        printf("Enter Name \n");
        scanf("%s",s[i].name);
        printf("Enter Employee ID \n");
        scanf("%s",s[i].employeeID);
        printf("Enter Experience(In years) \n");
        scanf("%f",&s[i].experience);
        printf("Enter Salary\n");
        scanf("%f",&s[i].salary);

    }
printf("Displaying Information--> \n");
for(int i=0;i<5;i++){
    printf("Details of Employee- %d \n",i+1);
    printf("Name- %s \n ",s[i].name);
    printf("Employee ID- %s \n",s[i].employeeID);
    printf("Experience- %f years \n",s[i].experience);
    printf("Salary- Rs%f \n",s[i].salary);

}
}
