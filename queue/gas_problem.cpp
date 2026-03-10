// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int totalgas= 0 , totalcost= 0 ;
//         for (int val: gas){
//             totalgas+=val;
//         }
//          for (int val: cost){
//             totalcost+=val;
//         }


//         if (totalgas< totalcost){       // if this conditioon becomes tru ;
//             return -1;       // does not exist any solution 
//         }



//          int start= 0 , currgas= 0 ;       // else wala condition 
//          for(int i = 0 ; i <gas.size();i++){

//             currgas += (gas[i]-cost[i]);      // this is teh condition to increase current gas , even ek ho gya possible answer to again use hi start rkh ke uska age age ajke current gas increase krneeg and then age jake niche wla conditon check hoga ; 

            // if (currgas <0){          // if ye negative ho gay tab to wo possible nhi hai solutooon hona so we go to the next  start and then resatrt the currgas to 0 ;
//                 start= i+1;
//                 currgas= 0 ;
//             }
//          }

// nhi to at end jo start hai wahi answer hoga 
//          return start;
//     }
// };



//  //  we just need to chek till the last index ;
// we dont have to chekc the whole circular way just end tak dekh lo , uske baad kyunki qns ka coindition tha ki if exsit krega to uniqeu hi hoga matlb ek hi ans , so agar baki nhi hue to jo hoga wo automatically ho jayega ans , as bakiyo ke liye agar viabel ans ka condiotion hi fail ho gya to wo to nhi hi honge , 




//  if element hua hai possible ans to uss case main start to update nhi krnege but current gas ko next wale ke liye find krnege if age jake wo  fail hua to start se current index tak ke sare elemenrts hi honge possible answers'





//  more optimised by usnig oone single loop 

    //     int totalgas = 0;      
    //     int totalcost = 0;     
    //     int currgas = 0;       
    //     int start = 0;         

    //     for (int i = 0; i < gas.size(); i++) {
    //         totalgas += gas[i];
    //         totalcost += cost[i];
    //         currgas += (gas[i] - cost[i]);   

    //        
    //         if (currgas < 0) {
    //             start = i + 1;  
    //             currgas = 0;     
    //         }
    //     }

