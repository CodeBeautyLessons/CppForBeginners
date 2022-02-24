#include <iostream>
#include <ctime>

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "My name is Vova. ";

    time_t tt;

    struct tm* ti = new tm();

    time(&tt);

    localtime_s(ti, & tt);

    std::cout << "Today is " << ti->tm_wday << " day of the week.";


    system("pause>0");
}
