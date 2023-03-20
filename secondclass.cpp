#include "secondclass.h"

secondclass::secondclass()
{

}
void *secondclass::do_second(void * tmp)
{
    while(1)
    {
        static int i = 0;
        (*(ctlitem *)tmp).mymut.lock();
        (*(ctlitem *)tmp).myqu.push(i);
        (*(ctlitem *)tmp).mymut.unlock();

        printf("i am second %d \n",i);
        i++;
        usleep(100000);
    }


}
