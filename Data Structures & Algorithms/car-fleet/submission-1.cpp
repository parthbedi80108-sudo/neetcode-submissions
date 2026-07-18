class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=speed.size();
        vector<double>time;
        vector<pair<int,double>>cars;
        for(int i=0;i<n;i++){
            double t=(double(target-position[i]))/speed[i];
            time.push_back(t);
        }
        for(int i=0;i<n;i++){
            pair<int,double>cr={position[i],time[i]};
            cars.push_back(cr);
        }
        sort(cars.begin(),cars.end());
        int fleet_cnt=1;
        double last_time=cars[n-1].second;
        for(int i=n-1;i>=0;i--){
            double curr_time=cars[i].second;
            if(curr_time>last_time){
                fleet_cnt++;
                last_time=curr_time;
            }
        }
        return fleet_cnt;
    }
};
