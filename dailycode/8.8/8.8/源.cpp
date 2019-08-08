#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Parenthesis {
public: bool chkParenthesis(string A, int n) { 
	// write code here 
	stack<char> sc;
	for (auto ele : A)
	{ switch (ele)
		{ 
			case '(': 
				sc.push(ele);
				break;
			case ')':
				{
					if (sc.empty() || sc.top() != '(') 
						return false; 
					else
						sc.pop();
				}
				break;
			default: 
				return false;
		}
	}return true;
}
};



#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string> v;
	v.resize(n);
	for(auto& str : v)
		cin>>str;
	bool lenSym = true, lexSym = true;
	// ����Ҫע���i=1��ʼ������ǰ��Ƚϣ��Ƚϳ��� 
	for(size_t i = 1; i < v.size(); ++i)
	{
		if(v[i-1].size() >= v[i].size())
		{
			lenSym = false;
			break;
		}
	}
	//�Ƚ�ASCII��
	for(size_t i = 1; i < v.size(); ++i)
	{
		if(v[i-1] >= v[i])
		{
			lexSym = false;
			break;
		}
	}
	if (lenSym&& lexSym)
		cout << "both" << endl;
	else if (!lenSym && lexSym)
		cout << "lexicographically" << endl;
	else if (lenSym && !lexSym)
		cout << "lengths" << endl;
	else if (!lenSym && !lexSym)
		cout << "none" << endl;
	return 0;
}
