#include <iostream>

int main1(void) {

	int val, result=0;
	for (int i = 1; i < 6; i++) {
		std::cout << i << "��° ���� �Է�: ";
		std::cin >> val;
		result += val;
	}
	std::cout << "�հ�: " << result << std::endl;
	return 0;
}