#include <stdio.h>
#include "lily58.h"

uint32_t type_count = 0;
char countlog_str[24] = {};

void count_up(void){
    type_count++;
    snprintf(countlog_str, sizeof(countlog_str),"Type Count: %"PRId32"",type_count);
}

const char *read_countlog(void) {
  return countlog_str;
}