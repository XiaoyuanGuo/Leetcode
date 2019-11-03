class Solution {
public:
    int monthday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool isleap(int year){
        if((year%4 == 0 && year%100 != 0) || year%400 == 0)
            return true;
        return false;
    }
    int yearcount(int year){
        int count = 0;
        if(year == 1971)
            return 0;
        for(int i = 1971; i < year; i++ ){
            count += 365;
            if(isleap(i)){
                count++;
                // cout<<i<<endl;
            }
        }
        return count;
    }
    int monthcount(int month){
        int count = 0;
        for(int i = 0; i < month-1; i++)
            count += monthday[i];
        return count;
    }
    int daycount(int day){
        return day-1;      
    }
    
    string dayOfTheWeek(int day, int month, int year) {
        int count = 0;
        //1971.1.1 Friday
        count += yearcount(year);
        count += monthcount(month);
        count += daycount(day);
        if(isleap(year) && month > 2)
            count++;
        if(count%7 == 0)
            return "Friday";
        else if(count%7 == 1)
            return "Saturday";
        else if(count%7 == 2)
            return "Sunday";
        else if(count%7 == 3)
            return "Monday";
        else if(count%7 == 4)
            return "Tuesday";
        else if(count%7 == 5)
            return "Wednesday";
        else 
            return "Thursday";

    }
};
