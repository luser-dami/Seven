#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkYear()
{
    int Year;
    cin>>Year; 
    if(Year<=2024 && Year >= 1900) return true;
    else return false;
        
    
}


bool checkMonthAndDay()
{
    int Month;
    cin>>Month;
    int Day;
    cin>>Day;
    if(Month<=12 && Month >= 1)
    {
        if(Day>=1&&Day<=31)
        {
            if (Day == 31 && (Month != 1 && Month != 3 && Month != 5 && Month != 7 && Month != 8 && Month != 10 && Month!= 12)) return false;
            else if (Month == 2 && Day>30) return false;
            else return true;
        }
        else return false;
    }
    else return false;    


}






int main(int argc, char* argv[])
{
    bool Year = checkYear();
    bool DayAndMonth = checkMonthAndDay();
    if(!Year) cout<<"Year is invalid"<<endl;
    if(!DayAndMonth) cout<<"DayAndMonth is invalid"<<endl;
    if(Year&&DayAndMonth) cout<<"Valid"<<endl;
    return 0;
}
