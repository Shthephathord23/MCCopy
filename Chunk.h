#pragma once

#include "Vector2.h"

#include "Block.h"

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
		//Chunk();

		Chunk(long long, math::Vector2);

		MapInfo* getChunkPointer() const { return this->m_Chunk; }

		__forceinline MapInfo& operator()(int, int, int);

		__forceinline void chunkInit(long long, math::Vector2);

		~Chunk();
	private:
		MapInfo* m_Chunk;
	};

}