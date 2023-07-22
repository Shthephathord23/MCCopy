#include "Map.h"

using namespace MC;

void InitalizeBlocks()
{

	blocuri[0] = { 0, ' ', "Air" };

	blocuri[1] = { 1, '#', "Bedrock" };

	blocuri[2] = { 2, 'S', "Stone" };
	blocuri[3] = { 3, 'd', "Dirt" };
	blocuri[4] = { 4, 'W', "Wood" };

	blocuri[5] = { 5, 'D', "DiamondOre" };
	blocuri[6] = { 6, 'G', "GoldOre" };
	blocuri[7] = { 7, 'I', "IronOre" };

}

void InitSolidMap(SolidMap& solidMap)
{



}