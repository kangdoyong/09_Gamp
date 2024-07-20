#include <stdio.h>
#include <string.h>

// 구조체, 열거형은 모두 struct와 enum 키워드를
// 이용해서 변수를 선언해야 되므로, 불편함
// typedef 을 사용하면 타입 선언 시, struct와 enum 키워드를 생략할 수 있습니다.

// typedef : 타입의 이름을 재정의
// 원한다면 복수의 별칭을 지정 가능
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
	printf("캐릭터 닉네임을 입력해주세요.\n");
	gets(character.nickname);

	// 정상적인 직업 값이 입력될 때까지, 입력을 반복하도록
	while (1)
	{
		// 콘솔 화면 지우라고 명령
		system("cls");


		printf("캐릭터 직업을 선택해주세요. \n");
		printf("전사 / 마법사 / 궁수\n");
		printf("입력 : ");

		char selectJob[128];
		gets(selectJob);

		// 입력한 문자열이 전사라면
		if (!strcmp(selectJob, "전사"))
		{
			character.job = Warrior;
			printf("직업이 전사로 설정되었습니다.\n");
			break;
		}
		else if (!strcmp(selectJob, "마법사"))
		{
			character.job = Magician;
			printf("직업이 마법사로 설정되었습니다.\n");
			break;
		}
		else if (!strcmp(selectJob, "궁수"))
		{
			character.job = Archer;
			printf("직업이 궁수로 설정되었습니다.\n");
			break;
		}
		else
		{
			printf("잘못된 입력입니다.\n");
			// 프로그램을 약 1초간 일시정지
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
			strcpy(jobName,"전사");
			break;
		case Magician:
			strcpy(jobName,"마법사");
			break;
		case Archer:
			strcpy(jobName, "궁수");
			break;
	}

	printf("닉네임 : %s \n", character.nickname);
	printf("직업 : %s \n", jobName);
	printf("레벨 : %d \n", character.level);
}
