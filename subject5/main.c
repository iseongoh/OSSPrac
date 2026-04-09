#include <stdio.h>

int main()
{
    char name[20];
    int grade;
    char class[50];
    char school[50];
    printf("이름을 입력하세요: ");
    scanf("%s", &name);
    printf("학번을 입력하세요: ");
    scanf("%d", &grade);
    printf("학과를 입력하세요: ");
    scanf("%s", &class);
    printf("학교를 입력하세요: ");
    scanf("%s", &school);

    printf("\n<출력>\n");
    printf("이름: %s\n", name);
    printf("학번: %d\n", grade);
    printf("학과: %s\n", class);
    printf("학교: %s\n", school);
    return 0;
}
    