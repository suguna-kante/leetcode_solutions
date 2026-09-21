class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        int n=pos.size();
        vector<pair<int,int>>cars;
        cars.reserve(n);
        for(int i=0;i<n;i++){
            cars.push_back({pos[i],speed[i]});

        }
        sort(cars.begin(),cars.end());
        stack<double>st;
        for(int i=0;i<n;i++){
            double time=(target-cars[i].first)/(double)cars[i].second;
            while(!st.empty() && st.top()<=time){
                st.pop();
            }
            st.push(time);
        }
        return st.size();
        
    }
};