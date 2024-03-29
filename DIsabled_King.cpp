/*Disabled King Problem Code: DISABLEDKINGSolvedSubmit
Read problem statements in Mandarin, Vietnamese, and Russian as well.
Chef loves Chess and has thus invented a new piece named "Disabled King".

Let's denote the cell at the intersection of the i-th column from the left and j-th row from the top by (i,j).

If he is currently in cell (x,y), the disabled king can move to the following positions in one move (provided that he remains in the chessboard):

(x,y+1)
(x,y−1)
(x+1,y+1)
(x+1,y−1)
(x−1,y+1)
(x−1,y−1)
In short, the Disabled King cannot move horizontally.

In an N×N chessboard, the Disabled King is currently situated at the top-left corner (cell (1,1)) and wants to reach the top-right corner (cell (N,1)). Determine the minimum number of moves in which the task can be accomplished.

Input Format
The first line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single integer N in a separate line.
Output Format
Output the minimum number of moves to get from the top-left cell to the top-right one.

Constraints
1≤T≤500
2≤N≤500
Sample Input 1 
2
2
3
Sample Output 1 
2
2
Explanation
Test case 1:

Initially chef is at (1,1). He cannot directly move to (2,1) as the disabled king cannot move horizontally. So he needs at least 2 moves to reach (2,1). And that can be achieved by first moving to (1,2) and then moving to (2,1) from there.

Test case 2:

Clearly we cannot reach (3,1) from (1,1) in just one move. We require at least 2 moves. And this can be achieved by first moving to (2,2) and then moving to (3,1) from there.*/

#include<iostream>
using namespace std;
int main() {

    long long int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        if(n % 2 == 0) {
            cout << n << "\n";
        }
        else {
            cout << n - 1 << "\n";
        }
    }
    return 0;
}
