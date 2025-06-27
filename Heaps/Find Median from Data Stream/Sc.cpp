class MedianFinder {
public:
    priority_queue<int>minpq;
    priority_queue<int>maxpq;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        int s2=minpq.size();
        int s1=maxpq.size();
        if(s1>s2){
            int top=maxpq.top();
            if(top>num){
                maxpq.pop();
                minpq.push(-top);
                maxpq.push(num);
            }
            else{
                minpq.push(-num);
            }
        }
        else{
            
            if(maxpq.empty())
                maxpq.push(num);
            else{
                int mint=-minpq.top();
                int maxt=maxpq.top();
                if(mint<num){
                    minpq.pop();
                    minpq.push(-num);
                    maxpq.push(mint);
                }
                else if(maxt>num){
                    if(s1==s2){
                        maxpq.push(num);
                    }
                    else{
                        maxpq.pop();
                        maxpq.push(num);
                        minpq.push(-maxt);
                    }
                }
                else{
                    maxpq.push(num);
                }
            }
        }

    }
    
    double findMedian() {
        int s2=minpq.size();
        int s1=maxpq.size();

        if((s1+s2)%2==0)
            return (maxpq.top()-minpq.top())*1.0/2;
        return maxpq.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
