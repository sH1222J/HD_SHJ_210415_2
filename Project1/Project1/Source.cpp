/*
* https://devkoboso.com/entry/Flow-control-Conditional-Statements
2.다음과같이 출력되는 프로그램을 만들어라.
사용자가 1~9의 수를 입력하면 그값에 맞는 구구단을 출력하면된다.
사용자가 0을입력하면 프로그램을 종료하고,
0보다 작은값 이나 9보다 큰값을 입력하면 Error를 출력하고 다시 아래 문장을 출력하면 된다.
문장출력
"1~9의 수를 입력하면 구구단이 출력됩니다.
0을 입력하면 프로그램이 종료됩니다."
*/

#include<stdio.h>
void main() {
	int a, b;

	while (true) { // while에 true을 지정하면 무한 루프
		printf("1~9의 수를 입력하면 구구단이 출력됩니다.\n"); // 문자 출력
		printf("0을 입력하면 프로그램이 종료됩니다.\n"); // 문자 출력

		scanf_s("%d", &a); // scanf("입력받을 형태", &변수이름);
		if (a == 0) { // 0 입력시 프로그램 종료
			printf("프로그램이 종료됩니다!\n"); // 문자 출력
		}
		if (a < 0 || a>9) {
			printf("에러\n"); // 문자 출력
		}
		else {  // 위 조건불만족시 진행
			for (b = 1; b <= 9; b++) // for반복문이용하여 1~9 구구단 출력
			{
				printf("%d * %d = %d\n", a, b, a * b); // 문자 출력

			}
		}
	}
	fgetc(stdin);
}