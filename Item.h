#pragma once

#include <string>

namespace MC {

	class Item
	{
	public:
		Item()
			:m_Id(0), m_Texture(' '), m_Name("Air")
		{

		}

		Item(unsigned long long id, char ch, const std::string& s)
			:m_Id(id), m_Texture(ch), m_Name(s)
		{

		}

		Item(unsigned long long id, char ch, std::string&& s)
			:m_Id(id), m_Texture(ch)
		{
			m_Name = std::move(s);
		}

		unsigned long long getId() const { return this->m_Id; }
		char getTexture() const { return this->m_Texture; }
		const std::string& getName() const { return this->m_Name; }

		~Item()
		{

		}
	private:
		unsigned long long m_Id;
		char m_Texture;
		std::string m_Name;
	};

	const unsigned long long numberOfItems = 10;

	extern Item items[numberOfItems];

}

