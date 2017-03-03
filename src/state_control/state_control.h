
#ifndef STATE_CONTROL_H
#define STATE_CONTROL_H

struct entity_s;

#define STATE_FUNCTIONS_LARA        (0x01)
#define STATE_FUNCTIONS_BAT         (0x02)
#define STATE_FUNCTIONS_WOLF        (0x03)
#define STATE_FUNCTIONS_BEAR        (0x04)

#define TR_STATE_CURRENT (-1)

void StateControl_SetStateFunctions(struct entity_s *ent, int functions_id);

#endif
