#pragma once

#include "Item.h"

namespace MC {

	class Inventory
	{
	public:
		Inventory(const unsigned int);

		

		~Inventory();
	private:
		Item** m_Inv;
		const unsigned int m_Size;
	};

}

