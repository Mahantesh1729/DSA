//https://leetcode.com/problems/maximum-population-year/
//Approach1
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
       map <int, int> mp;
        
        for(int i = 1950; i <= 2050; i++)
        {
            mp[i] = 0;
        }
        
        int n = logs.size();
        
        for(int i = 1950; i <= 2050; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(logs[j][0] <= i && i < logs[j][1])
                {
                    mp[i]++;
                }
            }
        }
        int year, mx = 0; 
        for(auto i: mp)
        {
            if(i.second > mx)
            {
                mx = i.second;
                year = i.first;
            }
        }
        return year;
        
    }
};
//approach2
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int minYear = INT_MAX;
        int maxPop = INT_MIN;
        int year;
        int pop, prev = 0;
        int n = logs.size();
        
        
        for(int i = 0; i < n; i++)
        {
            year = logs[i][0];
            pop = 1;
            for(int j = 0; j < n; j++)
            {
                if(logs[j][0] <= year && year < logs[j][1])
                {
                    pop++;
                }
            }
            if(pop > maxPop)
            {
                maxPop = pop;
                minYear = year;
            }
            else if(pop == maxPop)
            {
                if(year < minYear)
                {
                    minYear = year;
                }
            }
        }
        
        return minYear;
        
    }
};
