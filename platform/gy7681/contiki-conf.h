#ifndef __CONTIKI_CONF_H__
#define __CONTIKI_CONF_H__
#include "mt7681def.h"

/*Use iot_get_ms_time api*/
#define CLOCK_CONF_SECOND 1000
#define UIP_CONF_IPV6 0
#define UIP_CONF_UDP_CONNS 10
#define UIP_CONF_TCP 1
#define UIP_CONF_MAX_CONNECTIONS 0

typedef uint32_t clock_time_t;
typedef unsigned short uip_stats_t;

#endif /* __CONTIKI_CONF_H__ */
