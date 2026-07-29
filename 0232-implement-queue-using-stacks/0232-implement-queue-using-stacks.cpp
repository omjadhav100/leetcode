class MyQueue {
public:
int s1[100],s2[100];
int top1,top2;
    MyQueue() {
        top1=-1;
        top2=-1;

        
    }
    
    void push(int x) {
        top1=top1+1;
        s1[top1]= x;
        
    }
    
    int pop() {
        if(top2==-1){
            while(top1!=-1){
                top2=top2+1;
                s2[top2]=s1[top1];
                top1=top1-1;
            }
        }
        int val=s2[top2];
        top2=top2-1;
        return val;
        
    }
    
    int peek() {
        if(top2==-1){
            while(top1!=-1){
                top2=top2+1;
                s2[top2]=s1[top1];
                top1=top1-1;
            }
        }
        return s2[top2];
        
    }
    
    bool empty() {
        if(top1==-1 && top2==-1)
        return true;
        else
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */