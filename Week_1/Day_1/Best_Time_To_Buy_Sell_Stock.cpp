class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MAX=0,minP=INT_MAX;
        for(int price:prices){
                minP=min(minP,price);
                MAX=max(MAX,price-minP);

            
               
        }
    
     return MAX;}
};