#include <iostream>
#include <string>
#include <vector>
using namespace std;
//
//int main()
//{
//	string str1, str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	char ret[256] = { 0 };
//
//	for (int i = 0; i < str2.size(); i++)
//		ret[str2[i]] = 1;
//	for (int i = 0; i < str1.size(); i++)
//	{
//		if (ret[str1[i]] != 1)
//			cout << str1[i];
//	}
//	cout << endl;
//	return 0;
//
//}
//
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> arr(n, 0);
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	int sum = arr[0];
//	int max = arr[0];
//
//	for (int i = 1; i < n; i++)
//	{
//		sum = sum + arr[i] > arr[i] ? sum + arr[i] : arr[i];
//		max = max < sum ? sum : max;
//	}
//
//	cout << max << endl;
//	return 0;
//}


//#include <bits/stdc++.h>
//using namespace std;

bool is24(vector<double> a, double result)
{
	int sum = 24;
	if (a.empty())
	{
		return result == sum;
	}
	for (int i = 0; i < a.size(); i++)
	{
		vector<double> b(a);
		b.erase(b.begin() + i);
		if (is24(b, result + a[i]) || is24(b, result - a[i]) || is24(b, result*a[i]) || is24(b, result / a[i]))
		{
			return true;
		}
	}
	return false;
}

int main()
{
	vector<double> a(4);
	while (cin >> a[0] >> a[1] >> a[2] >> a[3])
	{
		if (is24(a, 0))
		{
			cout << "true" << endl;
		}
		else
		{
			cout << "false" << endl;
		}
	}
	return 0;
}