#include <stdio.h>

int main()
{
    char name[20];
    int gradenum;
    char class[50];
    int grade;
    printf("이름을 입력하세요: ");
    scanf("%s", &name);
    printf("학번을 입력하세요: ");
    scanf("%d", &gradenum);
    printf("학과를 입력하세요: ");
    scanf("%s", &class);
    printf("학년을 입력하세요: ");
    scanf("%d", &grade);    
    
    printf("\n<출력>\n");
    printf("이름: %s\n", name);
    printf("학번: %d\n", gradenum);
    printf("학과: %s\n", class);
    printf("학년: %d\n", grade);
    return 0;
}