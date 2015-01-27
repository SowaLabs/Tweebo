#ifndef _MY_GETTIMEOFDAY_H_
#define _MY_GETTIMEOFDAY_H_


#include <winsock2.h>
int gettimeofday(struct timeval * tp, struct timezone * tzp);

struct timespec {
    time_t tv_sec;
    time_t tv_nsec;
};

#endif /* _MY_GETTIMEOFDAY_H_ */