#include <stdio.h>
#include "lily58.h"

int type_count = 0;
char countlog_str[24] = {};

void count_up(void){
    type_count++;
    snprintf(countlog_str, sizeof(countlog_str),"Type Count: %5d",type_count);
}

const char *read_countlog(void) {
  return countlog_str;
}