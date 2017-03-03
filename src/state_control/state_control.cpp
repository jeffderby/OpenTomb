
#include "../skeletal_model.h"
#include "../entity.h"
#include "../character_controller.h"
#include "state_control.h"

int StateControl_Lara(struct entity_s *ent, struct ss_animation_s *ss_anim);
void StateControl_LaraSetIdleAnim(struct entity_s *ent, int anim_type, int move_type);

int StateControl_Bat(struct entity_s *ent, struct ss_animation_s *ss_anim);
void StateControl_BatSetIdleAnim(struct entity_s *ent, int anim_type, int move_type);

int StateControl_Wolf(struct entity_s *ent, struct ss_animation_s *ss_anim);
void StateControl_WolfSetIdleAnim(struct entity_s *ent, int anim_type, int move_type);

void StateControl_SetStateFunctions(struct entity_s *ent, int functions_id)
{
    if(ent && ent->character)
    {
        switch(functions_id)
        {
            case STATE_FUNCTIONS_LARA:
                ent->character->state_func = StateControl_Lara;
                ent->character->set_idle_anim_func = StateControl_LaraSetIdleAnim;
                break;

            case STATE_FUNCTIONS_BAT:
                ent->character->state_func = StateControl_Bat;
                ent->character->set_idle_anim_func = StateControl_BatSetIdleAnim;
                break;

            case STATE_FUNCTIONS_WOLF:
                ent->character->state_func = StateControl_Wolf;
                ent->character->set_idle_anim_func = StateControl_WolfSetIdleAnim;
                break;
        }
    }
}