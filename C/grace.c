#include <stdio.h>
#include <fcntl.h>
/*
	a
*/
#define WR(x, s) dprintf(x, s, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, s, 34, 10, 10)
#define	OP() open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC)
#define FT() int main(){return(WR(OP(), "#include <stdio.h>%c#include <fcntl.h>%c/*%c	a%c*/%c#define WR(x, s) dprintf(x, s, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, s, 34, 10, 10)%c#define	OP() open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC)%c#define FT() int main(){return(WR(OP(), %c%s%c));}%cFT()%c"));}
FT()
