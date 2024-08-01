#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution{
public:
    int rob(vector<int>& nums){
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int> dp(n, 0); 
        /*
        Vector con el tamaño del vector entrante.
        Esto seria la memoria de la programación dinamica
        */
        dp[0]=nums[0];
        dp[1]=max(nums[0], nums[1]); 
        /*
        para las dos primeras casas se elije la que tenga mas dinero
        */
        for(int i=2; i<n; i++){  //arranca desde el tercer elemento
            dp[i]=max(dp[i-1], nums[i] + dp[i-2]); //aqui la programacion dinamica
            /*
            no robar la casa i, el dinero maximo seria dp[i-1]
            si robar la casa i, se suma ese dinero con el de dp[i-2], no adyacente
            */
        }
        return dp[n-1]; //retorna el tamaño del vector menos 1 para la cantidad real
    }
};

#endif // SOLUTION_HPP