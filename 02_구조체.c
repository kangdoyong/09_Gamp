#include <stdio.h>

struct MyStruct
{
	int variable;
};

void main()
{
	struct MyStruct ms1;
	ms1.variable = 10;
	
	// ����ü ���� ms2 ���� ��,
	// ������ �����ߴ� ms1�� ���Կ����Ѵٸ�?
	// -> ����ü �������� ���Կ���

	// ��� ����� �� ���簡 �Ͼ�ϴ�.
	struct MyStruct ms2 = ms1;
	
	printf("ms2.variable�� %d \n", ms2.variable);


}