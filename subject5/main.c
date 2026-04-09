#include <stdio.h>

int main()
{
    char name[20];
    int grade;
    printf("이름을 입력하세요: ");
    scanf("%s", &name);
    printf("학번을 입력하세요: ");
    scanf("%d", &grade);

    printf("\n<출력>\n");
    printf("이름: %s\n", name);
    printf("학번: %d\n", grade);

    return 0;
}