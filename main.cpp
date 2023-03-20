#include <iostream>
#include <stdio.h>
#include <pthread.h>
#include "firstclass.h"
#include "secondclass.h"
#include <stdlib.h>
#include <unistd.h>
#include <queue>
#include <mutex>
#include "type.h"
#include <condition_variable>

using namespace std;


int main(int argc , char * argv[])
{
    pthread_t th_1;
    pthread_t th_2;
    condition_variable cond;
    ctlitem myitem;
//    firstclass myfirst;
    secondclass mysecond;
    pthread_create(&th_1,NULL,firstclass::Instance()->do_first,&myitem);
    pthread_create(&th_2,NULL,mysecond.do_second,&myitem);
    while(1)
    {
        cout << "Hello World!" << endl;
        usleep(10000);

        if(myitem.myqu.empty())
        {
            continue;
        }
        myitem.mymut.lock();
        printf("consumer : %d \n",myitem.myqu.front());
        myitem.myqu.pop();
        myitem.mymut.unlock();
    }
    return 0;
}
