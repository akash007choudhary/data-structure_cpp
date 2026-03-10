// class Solution {
// public:
//     string predictPartyVictory(string senate) {
//         queue<int> r, d;
//         int n = senate.size();

//         // Store positions
//         for (int i = 0; i < n; i++) {
//             if (senate[i] == 'R')
//                 r.push(i);
//             else
//                 d.push(i);
//         }
//         // Simulate rounds        THIS PART IS TOUGH 
//         while (!r.empty() && !d.empty()) {
//             int ri = r.front(); r.pop();
            // int di = d.front(); d.pop();   # doono hi queue se pop ho chuke haii , ab jo chota tha wahi age shift ho jaeyga last ke next index pe baki jo badda tha index wo pop hi hogay aso done

//             // Smaller index acts first
//             if (ri < di) {
//                 r.push(ri + n);  // R survives to next round  matlb piche push kr diye 
//             } else {
//                 d.push(di + n);  // D survives to next round
//             }
//         }

//         // Whoever is left wins
//         return r.empty() ? "Dire" : "Radiant";
//     }
// };
