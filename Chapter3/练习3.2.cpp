#include <iostream>
#include <string>
using namespace std;

//����һ��
int main()
{
	string s;
	while (getline(cin, s))
	{
		cout << s << endl;
	}
	return 0;
}

//����һ����
int main()
{
	string s;
	while (cin >> s)
	{
		cout << s << endl;
	}
	return 0;
}