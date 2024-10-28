class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(datetod(date1)- datetod(date2));
    }
    int datetod(string dates)
    {
        int Y= stoi(dates.substr(0,4));
        int M = stoi(dates.substr(5,2));
        int D = stoi(dates.substr(8,2));
        int x=0;
        for(int i=1971;i<Y;i++)x+= leapYear(i)?366:365;
        for(int j= 1;j<M;j++) x+= daysToM(j,Y);
        
        return x+D;
    }
    bool leapYear(int y)
    {
        if((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
        {
            return true;
        }
        return false;
    }
    int daysToM(int m, int y)
    {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)return 31;
        if(m==2) return leapYear(y)? 29 : 28;
        return 30;
    }
};
