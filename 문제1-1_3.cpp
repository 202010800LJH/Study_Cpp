#include <iostream>
int main(void) {
	int num;
	std::cout << "���ڸ� �ϳ� �Է��ϼ���: ";
	std::cin >> num;
	std::cout << num << "��" << std::endl;
	for (int i = 1; i < 10; i++){
		std::cout << num << 'X' << i << '=' << num*i << std::endl;
	}
	return 0;
}