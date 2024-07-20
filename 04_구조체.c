#include <stdio.h>
#include <string.h>

// 구조체 형식의 배열을 사용

typedef struct Item
{
	// 이름
	char name[128];
	// 설명
	char desc[256];
}Item;

void PrintItemInfo(Item item);

void main()
{
	// 아이템 배열 변수 선언
	Item items[3];

	for (int i = 0; i < 3; ++i)
	{
		printf("아이템 이름 입력 : ");
		gets(items[i].name);

		printf("%s의 설명 입력 : ", items[i].name);
		gets(items[i].desc);
	}

	for (int i = 0; i < 3; ++i)
	{
		PrintItemInfo(items[i]);
	}
}

void PrintItemInfo(Item item)
{
	printf("이름 : %s \n", item.name);
	printf("설명 : %s \n", item.desc);
}
