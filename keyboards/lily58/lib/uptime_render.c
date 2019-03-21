#include <stdio.h>
#include "lily58.h"

char timelog_str[24] = {};

void set_timelog(void){
    uint32_t last_time = timer_read32();
    int seconds = (int)(last_time / 1000 ) % 60;
    int minutes = (int)(last_time / 1000 / 60 ) % 60;
    int hour = (int)(last_time / 1000 / 60 / 60);
    snprintf(timelog_str, sizeof(timelog_str), "uptime: %02d:%02d:%02d", hour, minutes, seconds);
}

const char *read_timelog(void) {
  return timelog_str;
}