/* This class provides some string utilities that
   can be called as stand alone functions
*/
#include <string>
#include "str_utils.h"

using namespace std;


string StrUtils::toUpperCase(string str){
	string s;
	for(char & c : str){
		s.append(1,toupper(c));
	}
	return s;
}
