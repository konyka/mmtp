#include "thread_pool.h"


int
main(int argc, char **argv)
{
   thread_pool_t* tp = NULL;
   int i = 0;
   
   tp = thread_pool_init(); 
   sleep(10);
   thread_pool_destroy(tp);
   
   sleep(5);
    
    
}




