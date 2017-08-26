#include "common.h"

////////////////////////////////////////////////////////////////////////constractor
common::common()                               
{
	name = "";
	id = 0;
	contactno = "";
	email = "";
}
////////////////////////////////////////////////////////////////////////constractor with attribute
common::common(string iname, int iid, string imobleno, string iemail)
{
	name = iname;
	id = iid;
	contactno = imobleno;
	email = iemail;
}
