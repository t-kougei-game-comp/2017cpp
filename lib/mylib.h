#pragma once 

namespace mylib 
{
	class Character {
	private:
		char name[256];

	public:
		Character();
		virtual ~Character();

		const char *getName() const { return name; }
		virtual const char *Shout() const { return ""; }
	};

	class Dog: public Character {
	private:

	public:
		Dog();
		~Dog();

		const char *Shout() const override;
	};

	class Human : public Character {
	private:

	public:
		Human();
		~Human();

		const char *Shout() const override { return "Woops"; }
	};

}
