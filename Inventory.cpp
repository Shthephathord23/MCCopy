#include "Inventory.h"

namespace MC {

	Inventory::Inventory(const unsigned int n)
		: m_Size(n)
	{
		this->m_Inv = new Item*[this->m_Size];
	}



	Inventory::~Inventory()
	{
		delete[] this->m_Inv;
	}

}