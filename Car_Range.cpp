/*Car Range Problem Code: CARRANGESolvedSubmit
The fuel economy of a car is the distance which it can travel on one litre of fuel.

The base fuel economy (i.e, its fuel economy when there is only one person - the driver - in the car) of a certain car is M kilometres per litre. It was also observed that every extra passenger in the car decreases the fuel economy by 1 kilometre per litre.

P people want to take this car for a journey. They know that the car currently has V litres of fuel in its tank.

What is the maximum distance this car can travel under the given conditions, assuming that all P people always stay in the car and no refuelling can be done?

Note that among the P people is also a driver, i.e, there are exactly P people in the car.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input, containing three space-separated integers P,M, and V - the number of people, base fuel economy, and amount of fuel present in the car, respectively.
Output Format
For each test case, output a single line containing one integer - the maximum distance that the car can travel.

Constraints
1≤T≤3⋅104
1≤P≤5
6≤M≤56
1≤V≤100
Sample Input 1 
3
5 10 20
1 6 10
4 6 1
Sample Output 1 
120
60
3
Explanation
Test Case 1: There are 5 people in the car, and its base fuel economy is 10. Thus, its effective fuel economy is 10−4=6, since there are 4 people present other than the driver. There are 20 litres of fuel in the car, so the maximum distance that can be travelled is 6⋅20=120.

Test Case 2: The effective fuel economy is 6, and the maximum distance that can be travelled is 6⋅10=60.

Test Case 3: The effective fuel economy is 3, and the maximum distance that can be travelled is 3⋅1=3.*/

#include<iostream>
using namespace std;
int main() {

    long long int t;
    cin >> t;
    while(t--) {
        long long int p, m, v;
        cin >> p >> m >> v;
        cout << (m - (p - 1)) * v << "\n";
    }
    return 0;
}
