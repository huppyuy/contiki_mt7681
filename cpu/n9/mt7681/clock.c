#include <sys/clock.h>
#include "iot_api.h"
#include "rtimer-arch.h"

static unsigned long sys_second;

extern IOT_CUST_TIMER  IoTCustTimer;
	
clock_time_t
clock_time(void)
{
  return iot_get_ms_time();
}
unsigned long
clock_seconds(void)
{
  return sys_second;
}
void second_call_back(uint32 param1,uint32 param2){
	sys_second++;
	cnmTimerStartTimer(&IoTCustTimer.custTimer1, RTIMER_ARCH_SECOND);
}
void clock_init(void){
	sys_second=0;
	cnmTimerInitTimer(&IoTCustTimer.custTimer1, second_call_back, 0, 0);
	
	cnmTimerStartTimer(&IoTCustTimer.custTimer1, RTIMER_ARCH_SECOND);
}

