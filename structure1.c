// You have to create a struct, named Student, representing the student's details,
// as mentioned above, and store the data of a student.

// Input Format

// Input will consist of four lines.
// The first line will contain an integer, representing age.
// The second line will contain a string, consisting of lower-case Latin characters ('a'-'z'), representing
// the first_name of a student.
// The third line will contain another string, consisting of lower-case Latin characters ('a'-'z'), representing 
// the last_name of a student.
// The fourth line will contain an integer, representing the standard of student.

// Note: The number of characters in first_name and last_name will not exceed 50.


#include <stdio.h>
#include <string.h>

struct student{
    int age ;
    char firstname [50] ;
    char lastname [50] ;
    int standard ;
};

int main(){
    struct student s1 ;
    printf("Enter The Age : ");
    scanf("%d", &s1.age);
    printf("\nEnter First Name : ");
    scanf("%s", s1.firstname);
    printf("\nEnter Last Name : ");
    scanf("%s", s1.lastname);
    printf("\nEnter Standard : ");
    scanf("%d", &s1.standard);

    printf("\n%d %s %s %d",s1.age,s1.firstname,s1.lastname,s1.standard);

    return 0;
}