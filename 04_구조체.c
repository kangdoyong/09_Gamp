#include <stdio.h>
#include <string.h>

// ����ü ������ �迭�� ���

typedef struct Item
{
	// �̸�
	char name[128];
	// ����
	char desc[256];
}Item;

void PrintItemInfo(Item item);

void main()
{
	// ������ �迭 ���� ����
	Item items[3];

	for (int i = 0; i < 3; ++i)
	{
		printf("������ �̸� �Է� : ");
		gets(items[i].name);

		printf("%s�� ���� �Է� : ", items[i].name);
		gets(items[i].desc);
	}

	for (int i = 0; i < 3; ++i)
	{
		PrintItemInfo(items[i]);
	}
}

void PrintItemInfo(Item item)
{
	printf("�̸� : %s \n", item.name);
	printf("���� : %s \n", item.desc);
}
