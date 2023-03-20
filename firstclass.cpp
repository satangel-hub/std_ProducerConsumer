#include "firstclass.h"
firstclass *firstclass::instance=0;

firstclass *firstclass::Instance()
{
    if(!instance)
    {
        mutex mymux;
        mymux.lock();
        if(!instance)
        {
            instance = new firstclass;
        }
    }
    return instance;
}
firstclass::firstclass()
{

}
void *firstclass::do_first(void * tmp)
{

    while(1)
    {
        static int i = 0;
        (*(ctlitem * )tmp).mymut.lock();
        (*(ctlitem * )tmp).myqu.push(i);
        printf("i am first %d \n",i);
        (*(ctlitem * )tmp).mymut.unlock();

        i++;
        usleep(100000);
    }
}
