#include <iostream>





int main()
{
	int Number1;
	int Number2;
	int ResultNumber1;
	int ResultNumber2;
	
	std::cout << "두 수를 곱한 것과 두 수를 뺀 것을 더한 뒤에, 나중에 입력한 숫자로 나눕니다." << std::endl; 
	std::cin >> Number1;
	std::cin >> Number2;
	ResultNumber1 = ((Number1 * Number2) + (Number1 - Number2)) / Number2;
	ResultNumber2 = ((Number1 * Number2) + (Number1 - Number2)) % Number2;
	std::cout << "최종 값은 다음과 같습니다. " << ResultNumber1 << std::endl;
	std::cout << "나머지가 표시됩니다. " << ResultNumber2;


	return 0;
}