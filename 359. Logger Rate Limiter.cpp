class Logger {
    unordered_map<string,int>mymap;
public:

    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if(mymap.find(message)!= mymap.end())
        {
            int a = mymap[message];
            if(a+10 <=timestamp)
            {
                mymap[message]=timestamp;
            }
            else
            {
                return false;
            }
        }
        else
        {
            mymap[message]=timestamp;
        }

        return true;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */
