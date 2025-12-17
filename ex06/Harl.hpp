#ifndef HARL_HPP
# define HARL_HPP

#include <string>

typedef enum e_levelNr
{
	DEBUG,
	INFO,
	WARNING,
	ERROR,
} t_levelNr;

class Harl
{
	public:
		Harl();
		~Harl();

		void complain(std::string);
		t_levelNr getLevelNr(std::string);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif