#pragma once

#include <map>

#include "Chunk.h"

namespace MC {

	class SolidMap
	{
	public:
		SolidMap();

		void loadNewChunk(const math::Vector2&);

		void Draw(float);

		~SolidMap();
	private:
		std::map <math::Vector2, Chunk> m_SolidMap;
		long long m_Seed;
	};

	void InitSolidMap(SolidMap&);
}