#include <stdio.h>
#include "lily58.h"

int type_count = 0;
char countlog_str[24] = {};

char timelog_str[24] = {};
void set_timelog(void){
    uint32_t last_time = timer_read32();
    //snprintf(timelog_str, sizeof(timelog_str), "lt:%10"PRId32" [ms]", last_time);
    int seconds = (int)(last_time / 1000 ) % 60;
    int minutes = (int)(last_time / 1000 / 60 ) % 60;
    int hour = (int)(last_time / 1000 / 60 / 60);
    snprintf(timelog_str, sizeof(timelog_str), "uptime: %02d:%02d:%02d", hour, minutes, seconds);

}

void count_up(void){
    type_count++;
    snprintf(countlog_str, sizeof(countlog_str),"Type Count: %5d",type_count);
}

const char *read_countlog(void) {
  return countlog_str;
}

const char *read_timelog(void) {
  return timelog_str;
}