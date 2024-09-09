class RecentCounter {
public:
    int numRequests;
    int start;
    queue<int> requestQueue;

    RecentCounter() {
        numRequests = 0;
    }
    
    int ping(int t) {
        //Push the new ping to the request queue
        // And increase the num request
        requestQueue.push(t);
        numRequests++;
        
        // If the new ping is not within the range then pop the request time out of the queue until found one time starting time point that is within the range
        // While keeping track of the number request within the range
        while (t - 3000 > requestQueue.front()) {
            requestQueue.pop();
            numRequests--;
        }
        return numRequests;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
