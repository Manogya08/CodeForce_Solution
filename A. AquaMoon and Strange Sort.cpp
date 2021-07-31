/*Check Description for Problem Statements */
#include <bits/stdc++.h>
using namespace std;
int n, a[100005];
int main() {

	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		vector<int> v1, v2;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			if(i & 1) v1.push_back(a[i]);
			else v2.push_back(a[i]);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		int cnt1 = 0, cnt2 = 0;
		vector<int> arr;
		for(int i = 1; i <= n; i++) {
			if(i & 1) arr.push_back(v1[cnt1++]);
			else arr.push_back(v2[cnt2++]);
		}
		bool flag = 1;
		for(int i = 1; i < arr.size(); i++) {
			if(arr[i] < arr[i - 1]) {
				flag = 0;
				break;
			}
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
