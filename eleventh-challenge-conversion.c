#include <stdio.h>

int main () {

    int minutesEnterd = 0;
    double years = 0.0;//this could be a long depending on how muc calculation you want to do because you could actually get into a pretty big decimal point number, so long might be a better option, but we gunna leave it double.
    double days = 0.0;
    int dayz = 0.0;
    double minutesInYear = 0;

    printf("Please enter the number of minutes: ");

    //get input from user
    scanf("%d", &minutesEnterd);//the first parameter and argument is the type of data at you want to read in to convert, remeber everything is read in as text or string. so you have to convert it to how you're gunna store it. so "%d" is saying we gunna store it as an int and we gunna store it in minutesEnterd variable

    minutesInYear = (60 * 24 * 365);//min, hours, days

    years = (minutesEnterd / minutesInYear);
    days = (minutesEnterd / 60.0) / 24.0;//min and hours


    dayz = (int) (minutesEnterd / 60.0) / 24.0;//this is how it looks like with casting, just like java, it will only return whole numbers

    printf("%d minutes is approximately %f years and %f days\n", minutesEnterd, years, days);

    return 0;
}