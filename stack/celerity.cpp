
//                  1️⃣ Compare (0,1):
//                      M[0][1] == 1 → 0 knows 1 → 0 is not celebrity → keep 1

//                  2️⃣ Compare (1,2):
//                      M[1][2] == 1 → 1 knows 2 → 1 is not celebrity → keep 2


#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int findCelebrity(vector<vector<int>>& M, int n) {
    stack<int> s;

    // Step 1: Push all people into stack
    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    // Step 2: Find potential celebrity
    while (s.size() > 1) {
        int A = s.top(); s.pop();
        int B = s.top(); s.pop();

        if (M[A][B] == 1)
            s.push(B);  // A knows B → A not celeb
        else
            s.push(A);  // A doesn’t know B → B not celeb
    }

    // Step 3: Verify the candidate
    int cand = s.top();

   for (int i = 0; i < n; i++) {
    if (i != cand && (M[cand][i] == 1 || M[i][cand] == 0)) {
        return -1;         // not celebrity condition ;
    }
}
// else it is celebrity;
    return cand;
}

int main() {
    vector<vector<int>> M = { {0, 1, 1},{0, 0, 1},{0, 0, 0}};

    int n = M.size();
    int celeb = findCelebrity(M, n);

    if (celeb == -1)
        cout << "No celebrity found" << endl;
    else
        cout << "Celebrity is found " << celeb << endl;

    return 0;
}
