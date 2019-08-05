#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//×é¶Ó¾ºÈü
//Ì°ĞÄËã·¨

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	long n;
	cin >> n;
	vector<long double> arr;
	arr.resize(n * 3);
	for (int i = 0; i < n * 3; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());
	long double sum = 0;
	for (int i = n; i < 3 * n - 1; i += 2)
		sum += arr[i];
	cout << fixed << setprecision(0) << sum << endl;
	return 0;
}

//É¾³ı¹«¹²×Ö·û´®

#include <iostream>

#include <string>

using namespace std;

int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int hash[256] = { 0 };

	for (int i = 0; i < str2.size(); i++)
		hash[str2[i]] = 1;

	string ret;
	for (int i = 0; i < str1.size(); i++)
	{
		if (hash[str1[i]] == 1)
			continue;
		ret.push_back(str1[i]);
	}
	cout << ret.c_str() << endl;
	return 0;
}

//ÅÅĞò×ÓĞòÁĞ
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n, 0);
	for (int i = 0; i < arr.size(); i++)
		cin >> arr[i];

	int count = 1;
	for (int i = 1; i < n - 1; i++)
	{
		if ((arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
			|| (arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
		{
			count++;
			if (i != (n - 3))
				i++;
		}
	}
	cout << count << endl;
	return 0;
}

//ÄæÖÃ×Ö·û´®
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s2;
	while (cin >> s1)
	{
		s2 = s1 + " " + s2;
	}
	cout << s2.c_str() << endl;
	return 0;
}