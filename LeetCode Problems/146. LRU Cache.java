class LRUCache {
    LinkedHashMap<Integer, Integer> lhm;
    int capacity;
    public LRUCache(int capacity) {
        this.lhm = new LinkedHashMap<Integer, Integer>(capacity);
        this.capacity = capacity;
    }
    
    public int get(int key) {
        if(!lhm.containsKey(key))
            return -1;
        else{
            int removedValue = lhm.get(key);
            lhm.remove(key);
            lhm.put(key,removedValue);
            return removedValue;
        }  
    }
    
    public void put(int key, int value) {
        if(lhm.size() == capacity && !lhm.containsKey(key)){
            Map.Entry LRU = lhm.entrySet().iterator().next();
            int LRUKey = (int)LRU.getKey();
            lhm.remove(LRUKey);
            lhm.put(key,value);
        }
        else if(lhm.containsKey(key)){
            lhm.remove(key);
            lhm.put(key,value);
        }
        else
            lhm.put(key,value);
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
