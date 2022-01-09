#include "stdafx.h"
#include "Dbg.h"

Dbg::Dbg()
{
}

Dbg::~Dbg()
{
}

void Dbg::log(std::string log)
{
	std::cout << "Log: " << log << std::endl;
}

