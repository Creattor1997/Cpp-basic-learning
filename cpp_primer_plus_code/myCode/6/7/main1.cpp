#include <iostream>
#include<stdlib.h>
#include<cctype>
#include<string>


using namespace std;


int main()
{
	unsigned	cntVowels = 0, cntConsonants = 0, cntOthers = 0;

	cout << "���뵥�ʣ���ĸq������";
	string	word;
	while (cin >> word && "q" != word) {
		char&	first_char = word[0];
		if (!isalpha(first_char)) {
			++cntOthers;
		}
		else if ('a' == first_char || 'A' == first_char ||
			'e' == first_char || 'E' == first_char ||
			'i' == first_char || 'I' == first_char ||
			'o' == first_char || 'O' == first_char ||
			'u' == first_char || 'U' == first_char) {
			++cntVowels;
		}
		else {
			++cntConsonants;
		}
	}

	cout << "Ԫ����ͷ�ĵ���" << cntVowels << "������������" << cntConsonants << "��������" << cntOthers << "��" << endl;

	cout << endl;

	system("pause");

	return 0;
}