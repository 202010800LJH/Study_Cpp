#include <iostream>
int main(void) {
	int m, result = 0;
	do {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> m;
		if (m == -1) {
			std::cout << "���α׷��� �����մϴ�.";
			break;
		}
		result = 50 + m * 0.12;
		std::cout << "�̹� �� �޿�: " << result << "����" << std::endl;
	} while (true);
	return 0;
}