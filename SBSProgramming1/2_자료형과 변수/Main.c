/*
*  ��¥   : 2025-10-16
* �н���ǥ : �ڷ����� ����
* �ǽ���ǥ : ���� ������ �м��ؼ� �ڷ����� �����Ѵ�.
*/

// �ڷ��� Data Type 
// Game Data : ����, �׸�, ��ȣ ���ǵǾ� ���� ���� ����
// ��ǻ�Ϳ��� ����� ������ �ʹ�.
// ����ų(����), ų�� ���ھ� ����(����), ���� ����(�Ҽ�)
// �̹��� 1920 x 1080, �Ҹ�(����)

// �ڷ���� Ư¡�� ���� ���¸� �з��� �ߴ�. Type
// �ڷ���  : ����, ����, �Ǽ�

// �ڷ����� �̿��ϴ� ���
// (� Ÿ��) "�̸�" Variable ����
// �Լ��� ����ϴ� ���
// int ������ ǥ���ϴ� Ÿ��
// float �Ǽ�
// char ���� "H e l l o"
// string ���ڿ�

#include <stdio.h>

int main()
{
	// ����ų ���� ȭ�鿡 ����ϰ� �ʹ�.
	printf("����ų \n");
	// �������� ������� ���ھ ����ϰ� �ʹ�.
	printf("10 vs 25 \n");
	// è�Ǿ��� ������ �ִ� ������ ����ϰ� �ʹ�.
	printf("AD : 10 \n");
	///////////////////////////////////////////
	
	//������ ����
    int level = 5;

	// ������ ü��
	int GarenFirstLevelHP = 690;
	float GarenGrowthHP = 98;
	
	// ������ ���ݷ�
	int GarenFirstPower = 69;
	int GarenGrowPower = 4;

	// ������ ����
	int GarenFirstGuard = 38;
	int GarenGrowGuard = 4;

	// ������ ���� ���׷�
	int GarenFirstMagicGuard = 32;
	int GarenGrowMagicGurad = 1;

	printf("������ ���� \n");
	printf("ü��        | %d (+%f) \n", GarenFirstLevelHP, GarenGrowthHP); // % = ���� ����)
	printf("���� ü��   | %f \n", GarenFirstLevelHP + (level - 1) * GarenGrowthHP);
	printf("����        | 0 \n");
	printf("���ݷ�      | %d (+%d) \n", GarenFirstPower, GarenGrowPower);
	printf("����      | %d (+%d) \n", GarenFirstGuard, GarenGrowGuard);
	printf("���� ���׷� | %d (+%d) \n\n", GarenFirstMagicGuard, GarenGrowMagicGurad);

	// �� ������ ��ǻ�Ͱ� ���� ���ϴ� ��������� ������ �߳���?
	// ��.
	// (����) vs (���� �� �ؾ��Ѵ�)

	// 5������ ��� ������ ������ ��� �ǳ���

	printf("������ 5���� ���� \n");
	printf("���� ü��        | %f \n", GarenFirstLevelHP + (level - 1) * GarenGrowthHP);
	printf("���� ����        | 0 \n");
	printf("���� ���ݷ�      | %d \n", GarenFirstPower + (level - 1) * GarenGrowPower);
	printf("���� ����      | %d \n", GarenFirstGuard + (level - 1) * GarenGrowGuard);
	printf("���� ���� ���׷� | %d \n\n", GarenFirstMagicGuard + (level - 1) * GarenGrowMagicGurad);

	// �ٸ� è�Ǿ����ε� ���� ������� ������ ǥ���غ�����.

	// ����
	int Rakanlevel = 1;

	// ü��
	int RakanFirstHp = 610;
	int RakanGrowHp = 99;

	// ����
	int RakanFirstMana = 315;
	int RakanGrowMana = 50;

    // ���ݷ�
	int RakanFirstPower = 62;
	int RakanGrowPower = 3;

	// ����
	int RakanFirstGuard = 30;
	int RakanGrowGuard = 4;

	// ���� ���׷�
	int RakanFirstMagicGuard = 32;
	int RakanGrowMagicGuard = 2;


	printf("��ĭ�� %d���� �ɷ�ġ\n", Rakanlevel);
	printf("���� ü��       | %d\n", RakanFirstHp + (Rakanlevel - 1 ) * RakanGrowHp);
	printf("���� ����       | %d\n", RakanFirstMana + (Rakanlevel - 1 ) * RakanGrowMana);
	printf("���� ���ݷ�     | %d\n", RakanFirstPower + (Rakanlevel -1 ) * RakanGrowPower);
	printf("���� ����     | %d\n", RakanFirstGuard + (Rakanlevel -1 ) * RakanGrowGuard);
	printf("���� ���� ���׷�| %d\n", RakanFirstMagicGuard + (Rakanlevel -1 ) * RakanGrowMagicGuard);



	// �м��غ��� ���� ������ ������ �ϳ� �����ɴϴ�. : ������
	// ü���� ����ǥ���� �ƴ� �̹����� ǥ���ϰ� �Ҽ��� ǥ��, (��, ��ź, ����)�� ������ ǥ��
	// �ɷ�ġ�� �Ǽ��� ǥ���Ǿ� �ְ� �߰�%�� ���������� �տ������� 
	// ���� ǥ��
}