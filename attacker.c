// Standard headers
#include <stdio.h>
// Internal headers
#include "direction.h"
#include "game.h"
#include "position.h"
#include "spy.h"

/*----------------------------------------------------------------------------*/
/* PUBLIC FUNCTIONS */
/*----------------------------------------------------------------------------*/
direction_t execute_attacker_strategy(position_t attacker_position, Spy defender_spy) {
    int max_up = attacker_position.i - 1;
    int max_left = attacker_position.j - 1;

    get_field();
    // TODO: Implement Attacker logic here
    return DIR_RIGHT;
}
/*----------------------------------------------------------------------------*/