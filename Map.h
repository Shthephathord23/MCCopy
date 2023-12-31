#pragma once

#include <vector>

#include "Chunk.h"

namespace MC {

	class SolidMap
	{
	public:
		SolidMap();

		~SolidMap();
	private:
		std::vector <Chunk> m_Map;
	};

	void InitSolidMap(SolidMap&);
}