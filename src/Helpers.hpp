// ** opensource.org/licenses/GPL-3.0

#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <iostream>
#include <string>
#include <list>

#include <algorithm>
#include <sstream>
#include <cstring>

#include <gtk/gtk.h>

namespace Help
{
	namespace String
	{
		void split(const std::string& str, std::list<std::string>& list, char delim);
		std::string toLowercase(std::string str);
		std::string getWord(std::string str, int index, char separator = ' ');
		std::string pathBasename(const std::string str);
		std::string trim(const std::string str);
	}

	namespace Gtk
	{
		int getChildPosition(GtkContainer* container, GtkWidget* child);
	}
}

#endif