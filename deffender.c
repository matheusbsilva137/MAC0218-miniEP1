// Standard headers
#include <stdio.h>
// Internal headers
#include "field.h"
#include "direction.h"
#include "position.h"
#include "spy.h"

/*----------------------------------------------------------------------------*/
/* PUBLIC FUNCTIONS */
/*----------------------------------------------------------------------------*/

bool isEmpty(position_t deffender_position) {
    Field f = get_field();
    return f.grid[deffender_position.i][deffender_position.j].item.symbol == ' ';
};

direction_t execute_deffender_strategy(position_t deffender_position, Spy defender_spy) {
    // mover o defensor até o meio do tabuleiro
    // usar o spy
    // voltar para a direita
    // TODO: unused parameters, remove these lines later
    UNUSED(attacker_position);
    UNUSED(defender_spy);

    
    
    // TODO: Implement Attacker logic here
    return DIR_RIGHT;
}
/*----------------------------------------------------------------------------*/

/*
    struct field {
        dimension_t dimension;
        item** grid;
    }
*/