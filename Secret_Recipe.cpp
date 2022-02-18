/*Secret Recipe Problem Code: CHEFRUN
Add problem to Todo list
Submit
Read problems statements in Mandarin chinese, Russian and Vietnamese as well.
Chef and his competitor Kefa own two restaurants located at a straight road. The position of Chef's restaurant is X1, the position of Kefa's restaurant is X2.

Chef and Kefa found out at the same time that a bottle with a secret recipe is located on the road between their restaurants. The position of the bottle is X3.

The cooks immediately started to run to the bottle. Chef runs with speed V1, Kefa with speed V2.

Your task is to figure out who reaches the bottle first and gets the secret recipe (of course, it is possible that both cooks reach the bottle at the same time).

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains five space-separated integers X1, X2, X3, V1 and V2.
Output
For each test case, print a single line containing the string "Chef" if Chef reaches the bottle first, "Kefa" if Kefa reaches the bottle first or "Draw" if Chef and Kefa reach the bottle at the same time (without quotes).

Constraints
1≤T≤105
|X1|,|X2|,|X3|≤105
X1<X3<X2
1≤V1≤105
1≤V2≤105
Sample Input 1 
3
1 3 2 1 2
1 5 2 1 2
1 5 3 2 2
Sample Output 1 
Kefa
Chef
Draw
Explanation
Example case 1. Chef and Kefa are on the same distance from the bottle, but Kefa has speed 2, while Chef has speed 1.*/

#include<iostream>
using namespace std;
int main() {

	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		if(a > b) {
		    cout << a << "\n";
		}
		else {
		    cout << b << "\n";
		}
		cout << b + a << "\n";
	}
	return 0;
}
