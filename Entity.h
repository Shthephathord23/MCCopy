#pragma once

#include "Vector3.h"

namespace MC {

	class Entity
	{
	public:
		Entity();

		~Entity();
	private:
		math::Vector3 m_Position;
		char m_Texture;
	};

}

