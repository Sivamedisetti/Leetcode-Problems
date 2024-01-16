class RandomizedSet {
public:
    vector<int>vec;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(find(vec.begin(),vec.end(),val) == vec.end())
        {
            vec.push_back(val);
            return true;
        }
        else  return false;
    }
    
    bool remove(int val) {
        auto it=find(vec.begin(),vec.end(),val);   
        if(it!=vec.end())
        {
            vec.erase(it);
            return true;
        }
        else return false;
    }
    
    int getRandom() {
        int x=random()%vec.size();
        return vec[x];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */