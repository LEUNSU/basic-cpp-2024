#include <iostream>
using namespace std;

int main(int argc, char * argv[])
{
	//int a, b;
	//int add;
	//int minus;
	//int multiple;
	//int divide;

	//cout << "������ �Է��ϼ���: ";
	//cin >> a >> b;

	//add = a + b;
	//minus = a - b;
	//multiple = a * b;
	//divide = a / b;

	//cout << "�� ���� ��: " << add;
	//cout << "�� ���� ��: " << minus;
	//cout << "�� ���� ��: " << multiple;
	//cout << "�� ���� ������: " << divide;

	int n1, n2;
	cout << "���� 2���� �Է��ϼ���";
	cin >> n1 >> n2;

	cout << "+: " << n1 + n2 << endl;
	cout << "-: " << n1 - n2 << endl;
	cout << "*: " << n1 * n2 << endl;
	try {
		if (!n2) throw n2;	// 0�̿��� �͵��� ���� ��
		cout << "/: " << n1 / n2 << endl;
	}
	catch (int exception) {
		cout << "0���� ���� �� �����ϴ�." << endl;
	}



	return 0;
}