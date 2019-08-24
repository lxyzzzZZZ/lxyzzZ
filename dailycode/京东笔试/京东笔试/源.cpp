//#include <iostream>
//#include <vector>
//using namespace std;
//
//long long max(long long A, long long B)
//{
//	return A > B ? A : B;
//}
//int main()
//{
//	long N;
//	cin >> N;
//	vector<long long> arr(N + 1, 0);
//	vector<long long> dp1(N + 1, 0);
//	vector<long long> dp2(N + 1, 0);
//	for (long i = 1; i <= N; i++)
//		cin >> arr[i];
//	for (long i = 1; i <= N; i++)
//	{
//		long long tmax = 1;
//		for (long j = 1; j < i; j++)
//		{
//			if (arr[j] < arr[i])
//				tmax = max(tmax, dp1[j] + 1);
//		}
//		dp1[i] = tmax;
//	}
//	for (long i = N; i >= 1; i--)
//	{
//		long long tmax = 1;
//		for (long j = N; j > i; j--)
//		{
//			if (arr[j] < arr[i])
//				tmax = max(tmax, dp2[j] + 1);
//		}
//		dp2[i] = tmax;
//	}
//	long long ret = 1;
//	for (long i = 1; i <= N; i++)
//	{
//		ret = max(ret, dp1[i] + dp2[i] - 1);
//	}
//	cout << N - ret << endl;
//	return 0;
//
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	long n;
//	cin >> n;
//	vector<long long> arr(n, 0);
//
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	long count = 1;
//	long long ret = arr[0];
//	for (long i = 0; i < arr.size() - 1; i++)
//	{
//		for (long j = i + 1; j < arr.size(); j++)
//		{
//			if (arr[j] > arr[i])
//			{
//				count++;
//				arr.erase(arr.begin() + j);
//				arr.erase(arr.begin());
//				break;
//			}
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}


#include <iostream>
#include <vector>

using namespace std;

long long max(long long a, long long b)
{
	return a > b ? a : b;
}
int main()
{
	long n;
	cin >> n;
	vector<long long> arr(n + 1, 0);
	vector<long long> dp1(n + 1, 0);
	vector<long long> dp2(n + 1, 0);
	for (long i = 1; i <= n; i++)
		cin >> arr[i];
	for (long i = 1; i <= n; i++)
	{
		long long tmax = 1;
		for (long j = 1; j < i; j++)
		{
			if (arr[j] < arr[i])
				tmax = max(tmax, dp1[j] + 1);
		}
		dp1[i] = tmax;
	}
	for (long i = n; i >= 1; i--)
	{
		long long tmax = 1;
		for (long j = n; j > i; j--)
		{
			if (arr[j] < arr[i])
				tmax = max(tmax, dp2[j] + 1);
		}
		dp2[i] = tmax;
	}
	long long ret = 1;
	for (long i = 1; i <= n; i++)
	{
		ret = max(ret, dp1[i] + dp2[i] - 1);
	}
	cout << n - ret + 1 << endl;
	return 0;
}