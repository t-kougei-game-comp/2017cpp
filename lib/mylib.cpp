#include "stdafx.h"
#include "mylib.h"

namespace mylib
{
	Character::Character()
	{
	}

	Character::~Character()
	{
	}

	Dog::Dog()
	{
		name[0] = 0;
	}

	Dog::~Dog()
	{
	}

	const char *Dog::Shout() const
	{
		return "BOWWOW";
	}

	Human::Human()
	{
	}

	Human::~Human()
	{
	}

}
