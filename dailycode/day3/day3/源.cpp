#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<long> arr(N, 0);
	for (int i = 0; i < arr.size(); i++)
		cin >> arr[i];

	int sum = arr[0];
	int max = sum;

	for (int i = 1; i < arr.size(); i++)
	{
		sum = sum >= 0 ? sum + arr[i] : arr[i];
		max = max < sum ? sum : max;
	}
	cout << max << endl;;
	return 0;
}


#include <iostream>
#include <string>

using namespace std;

bool is_True(string str)
{
	int begin = 0;
	int end = str.size() - 1;

	while (begin < end)
	{
		if (str[begin] != str[end])
			return false;

		begin++;
		end--;
	}
	return true;
}
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	int count = 0;
	for (int i = 0; i <= str1.size(); i++)
	{
		string ret = str1;
		ret.insert(i, str2);
		if (is_True(ret))
			count++;
	}
	cout << count << endl;
	return 0;
}


#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;
	int A, B, C;
	cin >> a >> b >> c >> d;

	A = (a + c) / 2;
	B = (b + d) / 2;
	C = (d - b) / 2;

	if ((c - a) / 2 != B)
		cout << "No" << endl;
	else
		cout << A << " " << B << " " << C << endl;
	return 0;

}