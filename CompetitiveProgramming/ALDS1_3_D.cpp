//#include<stack>
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//void ALDS() {
//	stack<int> S1;
//	stack<pair<int, int>> S2;
//	char ch;
//	int sum = 0;
//	for (int i = 0; cin >> ch; i++) {
//		if (ch == '\\') {
//			S1.push(i);
//		}
//		else if (ch == '/' && S1.size() > 0) {
//			int j = S1.top();
//			int a = i - j;
//			sum += a;
//			S1.pop();
//			while (S2.size() > 0 && S2.top().first > j) {
//				a += S2.top().second; S2.pop();
//			}
//			S2.push(make_pair(j, a));
//		}
//	}
//
//	vector<int> ans;
//	while (S2.size() > 0) { ans.push_back(S2.top().second);S2.pop(); }
//	cout << sum << endl;
//	cout << ans.size();
//
//	for (int i = 0; i < ans.size(); i++) {
//		cout << " ";
//		cout << ans[i];
//	}
//	cout << endl;
//}
//
//int main() {
//	ALDS();
//	return 0;
//}
//
