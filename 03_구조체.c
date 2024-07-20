#include <stdio.h>
#include <string.h>

// ����ü, �������� ��� struct�� enum Ű���带
// �̿��ؼ� ������ �����ؾ� �ǹǷ�, ������
// typedef �� ����ϸ� Ÿ�� ���� ��, struct�� enum Ű���带 ������ �� �ֽ��ϴ�.

// typedef : Ÿ���� �̸��� ������
// ���Ѵٸ� ������ ��Ī�� ���� ����
typedef unsigned int uint, UINT;

typedef enum JobType
{
	Warrior,
	Magician,
	Archer,
}Job, JOB;

typedef struct Character
{
	char nickname[256];
	Job job;
	uint level;
}Character;

void PrintCharacterInfo(Character character);

void main()
{
	Character character;
	printf("ĳ���� �г����� �Է����ּ���.\n");
	gets(character.nickname);

	// �������� ���� ���� �Էµ� ������, �Է��� �ݺ��ϵ���
	while (1)
	{
		// �ܼ� ȭ�� ������ ���
		system("cls");


		printf("ĳ���� ������ �������ּ���. \n");
		printf("���� / ������ / �ü�\n");
		printf("�Է� : ");

		char selectJob[128];
		gets(selectJob);

		// �Է��� ���ڿ��� ������
		if (!strcmp(selectJob, "����"))
		{
			character.job = Warrior;
			printf("������ ����� �����Ǿ����ϴ�.\n");
			break;
		}
		else if (!strcmp(selectJob, "������"))
		{
			character.job = Magician;
			printf("������ ������� �����Ǿ����ϴ�.\n");
			break;
		}
		else if (!strcmp(selectJob, "�ü�"))
		{
			character.job = Archer;
			printf("������ �ü��� �����Ǿ����ϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� �Է��Դϴ�.\n");
			// ���α׷��� �� 1�ʰ� �Ͻ�����
			Sleep(1000);
		}
	}

	character.level = 1;
	
	PrintCharacterInfo(character);
}

void PrintCharacterInfo(Character character)
{
	char jobName[128];

	switch (character.job)
	{
		case Warrior:
			strcpy(jobName,"����");
			break;
		case Magician:
			strcpy(jobName,"������");
			break;
		case Archer:
			strcpy(jobName, "�ü�");
			break;
	}

	printf("�г��� : %s \n", character.nickname);
	printf("���� : %s \n", jobName);
	printf("���� : %d \n", character.level);
}
