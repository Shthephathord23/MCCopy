#include "SolidMap.h"
#include "Vector2.h"

namespace MC {

	SolidMap::SolidMap()
	{
		
	}

	void SolidMap::loadNewChunk(const math::Vector2& v)
	{
		m_SolidMap.insert({ v, {m_Seed, v} });
	}

	void SolidMap::Draw(float z)
	{
		
	}

	SolidMap::~SolidMap()
	{

	}

}
