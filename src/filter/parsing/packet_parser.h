#ifndef PACKET_PARSER_H
#define PACKET_PARSER_H
#include <stdbool.h>
#include "rule.h"

bool bit_match_parser(const struct rule_data *, const struct rule *);

// not necessarily a packet parser but belongs here
bool is_blocked_ipv4(const char *);





#endif /* PACKET_PARSER_H */