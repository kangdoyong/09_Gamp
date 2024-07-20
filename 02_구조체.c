#include <stdio.h>

struct MyStruct
{
	int variable;
};

void main()
{
	struct MyStruct ms1;
	ms1.variable = 10;
	
	// 구조체 변수 ms2 선언 후,
	// 위에서 선언했던 ms1을 대입연산한다면?
	// -> 구조체 변수끼리 대입연산

	// 모든 멤버의 값 복사가 일어납니다.
	struct MyStruct ms2 = ms1;
	
	printf("ms2.variable은 %d \n", ms2.variable);


}