#include <bits/stdc++.h>
using namespace std;

USing Recursion

    // int minimumCost(int n , int cost []){

    //     if(n == 0)
    //     return cost[0];

    //     if(n == 1)
    //     return cost[1];

    //     int top = min(minimumCost(n-1 , cost) + cost[n] , minimumCost(n-2, cost) + cost[n]);

    //     return top;
    // }
    // int main()
    // {
    //     int a [] = {16,19,10,12,18};
    //     int n = sizeof(a) / sizeof(a[0]);
    //     cout<< minimumCost(n-2 ,a);
    //     return 0;
    // }

    USing Memoization

        // int miniCostMem(int n , vector<int>& cost, vector<int>& dp){
        //     if( n ==0)
        //     return cost[0];

        //     if( n == 1)
        //     return cost[1];

        //     if( dp[n] != -1)
        //     return dp[n];

        //     dp[n] = min(
        //         miniCostMem(n-1, cost,dp) + cost[n],
        //         miniCostMem(n-2, cost,dp) + cost[n]);

        //     return dp[n];
        // }

        // int minCostClimbingStairs(vector<int>& cost){
        //     int n = cost.size();
        //     vector<int> dp(n+1 , -1);

        //     int ans = min(miniCostMem(n-2, cost,dp),
        //                   miniCostMem(n-1, cost,dp));
        //     return ans;
        // }

        // int main (){
        //     vector<int> a{ 10, 15, 20 };
        //     cout << minCostClimbingStairs(a);
        //     return 0;
        // }

        USing Tabulation

    // int miniCost(int cost[] ,int n){
    //     int dp[n];

    //     // BASE CASE
    //     if(n == 1 )
    //     return cost[0];

    //     dp[0] =cost[0];
    //     dp[1] =cost[1];

    //     // iterate for finding the cost
    //     for(int i = 2 ; i < n ; i++){
    //         dp[i] = min(dp[i-1] , dp[i-2]) + cost[i];
    //     }

    //     // return the minimum
    //     return min(dp[n-2] , dp[n-1]);
    // }

    // int main (){
    //     int a [] = {16,19,10,12,18};
    //     int n = sizeof(a) / sizeof(a[0]);
    //     cout<< miniCost( a,n);
    //     return 0;
    // }