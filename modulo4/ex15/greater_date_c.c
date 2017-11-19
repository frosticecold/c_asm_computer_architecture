#include "greater_date_c.h"

int greater_date_c(int date1, int date2){

    int year1 = (date1 & 0x0000FFFF);
    int day1 = (date1 & 0x00FF0000);
    int month1 = (date1 & 0xFF000000);

    int year2 = (date2 & 0x0000FFFF);
    int day2 = (date2 & 0x00FF0000);
    int month2 = (date2 & 0xFF000000);

    if(year2 > year1){
        return date2;
    }
    if(year2 == year1){
        if(month2>month1){
            return date2;
        }else{
            if(month2==month1){
                if(day2>day1){
                    return date2;
                }
            }
        }
    }
    return date1;
}