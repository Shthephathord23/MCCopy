#include "Map.h"

namespace MC {

	Chunk::Chunk()
	{
		this->m_Chunk = new MapInfo[chunkSize * chunkSize * heightLimit + 5];

		int xBegin = this->m_UL.getX();
		int yBegin = this->m_UL.getY();
		int xEnd = xBegin + chunkSize;
		int yEnd = yBegin + chunkSize;

		for (int j = yBegin; j < yEnd; ++j)
		{
			for (int i = xBegin; i < xEnd; ++i)
			{
				this->m_Chunk[i + j * chunkSize] = { blocuri + 1, 0 };
			}
		}

		for (int k = 1; k <= 5; ++k)
		{
			for (int j = yBegin; j < yEnd; ++j)
			{
				for (int i = xBegin; i < xEnd; ++i)
				{

					if (k == 2 && (i % 4 == 2 && j % 4 == 2))
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 2, 0 };
					}
					else if (k == 3 && (i % 2 == 0 && j % 2 == 0))
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 2, 0 };
					}
					else
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 1, 0 };
					}

					if (k == 4 && (i % 4 == 3 && j % 4 == 3))
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 1, 0 };
					}
					else if (k == 5 && (i % 2 == 1 && j % 2 == 1))
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 1, 0 };
					}
					else
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 2, 0 };
					}

				}
			}
		}

	}


	MapInfo& Chunk::operator()(int i, int j, int k)
	{
		if (0 <= i && 0 <= j && 0 <= k && i <= worldSize && j <= worldSize && k <= worldSize)
			return this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize];
		else
			return *((MapInfo*)0);
	}



	void Chunk::chunkInit(long long seed)
	{

		int xBegin = this->m_UL.getX();
		int yBegin = this->m_UL.getY();
		int xEnd = xBegin + chunkSize;
		int yEnd = yBegin + chunkSize;

		for (int k = 1; k < 128; ++k)
		{
			for (int j = yBegin; j < yEnd; ++j)
			{
				for (int i = xBegin; i < xEnd; ++i)
				{
					if ((0 < k && k < 32) && ((seed / i) % (xBegin + j) == j && (seed / j) % (yBegin + i) == i))
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 5, 0 };
					}
					else if ((0 < k && k < 48) && ((seed / i) % (xBegin + j) == j || (seed / j) % (yBegin + i) == i))
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 6, 0 };
					}
					else if ((0 < k && k < 64) && ((seed / i) % (xBegin + j) == j || (seed / j) % (yBegin + i) == i))
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 7, 0 };
					}
					else
					{
						this->m_Chunk[i + j * chunkSize + k * chunkSize * chunkSize] = { blocuri + 2, 0 };
					}
				}
			}
		}
	}


	Chunk::~Chunk()
	{
		delete[] this->m_Chunk;
	}

}