#include <iostream>
using namespace std;
int main()
{
    string s; 
	int count = 0;
    cin >> s;
	for (size_t i = 0; i < s.size()/2; i++)
	{
		if (s[i] != s[(s.size()-1)-i]&& count==0)
		count++;
		else if (s[i] != s[(s.size() - 1) - i])
		{
			cout << "NO" << endl;
			count = 20;
			break;
		}
	}
	if ((s.size()%2 != 0 || count >0 )&& count < 20)
	cout << "YES"<< endl;
	else if (count < 20)
		cout << "NO" << endl;
}

