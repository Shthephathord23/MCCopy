#pragma once

#include <vector>

#include "Blocks.h"
#include "Mathematics.h"

namespace MC {

	const unsigned long long worldSize = 1 << 12;
	const int chunkSize = 16;
	const int heightLimit = 1 << 9;

	struct MapInfo
	{
		Block* block = blocuri;
		bool isEntity = 0;
	};

	class Chunk
	{
	public:
		Chunk();

		MapInfo* getChunkPointer() const { return this->m_Chunk; }

		__forceinline MapInfo& operator()(int, int, int);

		void chunkInit(long long);

		~Chunk();
	private:
		MapInfo* m_Chunk;
		math::Vector2 m_UL;
	};

	class SolidMap
	{
	public:

	private:
		std::vector <Chunk> m_Map;
	};

	void InitSolidMap(SolidMap&);
}