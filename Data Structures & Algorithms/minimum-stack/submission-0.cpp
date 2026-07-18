class MinStack {
    vector<int>v1;
    vector<int>v2;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        v1.push_back(val);
        if(v2.size()>=1)v2.push_back(min(val,v2[v2.size()-1]));
        else v2.push_back(val);
    }
    
    void pop() {
        v1.pop_back();
        v2.pop_back();
    }
    
    int top() {
        return v1[v1.size()-1];
    }
    
    int getMin() {
        return v2[v2.size()-1];
    }
};
