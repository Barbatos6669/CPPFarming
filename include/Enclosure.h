#pragma once
#include <iostream>
#include <vector>

#include "technology.h"

/**
 * @class Enclosure
 * @brief A class representing the enclosure advancment in farming
 *  
 */

class Enclosure : public Technology
{
    private:
        int foodProductionBonus; ///< Bonus to food production
        int inovationCost; ///< Cost of the inovation
        bool isResearched; ///< Is the inovation researched

    public:
        


};