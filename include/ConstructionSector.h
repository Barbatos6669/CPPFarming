#pragma once
#include <iostream>
#include <vector>
#include <string>

#include "building.h"

class ConstructionSector : public Building
{
    protected:
        // Attributes
        int Level; ///< Level of the sector
        int constructionPoints; ///< Construction points of the sector
        int constructionCost; ///< Cost of constructing the sector
        std::vector<std::string> constructionProjects; ///< List of construction projects

    public:

};
