#ifndef _LIS_H_
#define _LIS_H_

struct piece;
struct co_case;
struct coup;

struct piece **alloc_plateau();
void print_plateau(struct piece **plateau);
void free_plateau(struct piece** plateau);
void placement_init(struct piece** plateau);


#endif