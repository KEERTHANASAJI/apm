/*
Name       :Keerthana V
RollNo     :8
Date       :
Q.No       :16
Title      :Employee Management System
Aim        :Create an application to manage employee data using structures. The program should allow input, display, and update employee details such as name, ID, salary, and department.
Algorithm 
Step1. Start.
Step2. Define a structure named `student`.
Step3. Declare `name``id` `salary` and department`as a structure member.
Step4. Declare an array `stud[10]`.
Step5. Initialize `i` to `0`.
Step6. Display the menu.
Step7. Read the user's choice.
Step8. If choice is `1`, call the `input()` function else step11.
Step9. Read the employee name,ID,salary and department.
Step10. Increment `i`.
Step11. If choice is `2`, call the `display()` function else step13.
Step12. Display all employee details.
Step13. If choice is `3`, call the `update()` function else step17.
Step14. Read the ID to be updated.
Step15. If id is found read the employee details
Step16. Else display "Id not found".
Step17. If choice is `4`, exit the program else step19.
Step18. Display invalid choice.
Step19. Goto step 9 until choice `4`.
Step20. Stop.

*/
#include<stdio.h>
struct student{
  char name[20];
  int id;
  float salary;
  char department[20];
}stud[10];
int i=0,j;
void input(){
  printf("Enter name:\n");
  scanf("%s",stud[i].name);
  printf("Enter id:\n");
  scanf("%d",&stud[i].id);
  printf("Enter salary:\n");
  scanf("%f",&stud[i].salary);
  printf("Enter department:\n");
  scanf("%s",stud[i].department);
  i++;
}
void display(){
  printf("Name\t\t\tId\t\t\tSalary\t\t\tDepartment\n");
  for(j=0;j<i;j++)
    printf("%s\t\t\t%d\t\t\t%0.2f\t\t\t%s\n",stud[j].name,stud[j].id,stud[j].salary,stud[j].department);
}
void update(){
  int id,j,found=0;
  printf("enter the id :\n");
  scanf("%d",&id);
  for(j=0;j<=i;j++){
    if(stud[j].id == id){
      printf("enter name:");
      scanf("%s",stud[j].name);
      printf("Enter id:\n");
      scanf("%d",&stud[j].id);
      printf("Enter salary:\n");
      scanf("%f",&stud[j].salary);
      printf("Enter department:\n");
      scanf("%s",stud[j].department);
      int found=1;
      return;
      }
  }
  if(found==0){
          printf("Id not found\n");
          return ;
      }
}
int main(){
  int c;
  do{
    printf("1.input\n2.display\n3.update\n4.exit\n");
    scanf("%d",&c);
    switch(c){
      case 1:
        input();
        break;
      case 2:
        display();
        break;
      case 3:
        update();
        break;
      case 4:
        printf("exit\n");
        break;
      default:
        printf("invalid\n");
        break;
    }
  }while(c!=4);
  return 0;
}
/*
Output
1.input
2.display
3.update
4.exit
1
Enter name:
Anna
Enter id:
101
Enter salary:
20000
Enter department:
It
1.input
2.display
3.update
4.exit
1
Enter name:
Anjana
Enter id:
102
Enter salary:
3000
Enter department:
Sales
1.input
2.display
3.update
4.exit
3
enter the id :
102
enter name:Anjana
Enter id:
102
Enter salary:
30000
Enter department:
Sales
1.input
2.display
3.update
4.exit
2
Name                    Id                      Salary                  Department
Anna                    101                     20000.00                        It
Anjana                  102                     30000.00                        Sales
1.input
2.display
3.update
4.exit
4
exit
*/
