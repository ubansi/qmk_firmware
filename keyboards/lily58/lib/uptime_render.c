#include <stdio.h>
#include "lily58.h"

char timelog_str[24] = {};

void set_timelog(void){
    uint32_t uptime_millsec = timer_read32();
    uint32_t uptime_sec = uptime_millsec / 1000;
    int seconds = (int)(uptime_sec % 60);
    int minutes = (int)(uptime_sec / 60 % 60);
    int hour = (int)(uptime_sec / 60 / 60);
    snprintf(timelog_str, sizeof(timelog_str), "uptime: %02d:%02d:%02d", hour, minutes, seconds);
}

const char *read_timelog(void) {
  return timelog_str;
}