#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	
//    int var1 = 'k';
//    int var2 = '8';
//    int var3 = '\t';
//    int var4 = ' ';
//    int var5 = '\n';
    
//    if( isprint(var1) ) {
//       printf("var1 = |%c| can be printed\n", var1 );
//    } else {
//       printf("var1 = |%c| can't be printed\n", var1 );
//    }
   
//    if( isprint(var2) ) {
//       printf("var2 = |%c| can be printed\n", var2 );
//    } else {
//       printf("var2 = |%c| can't be printed\n", var2 );
//    }
   
//    if( isprint(var3) ) {
//       printf("var3 = |%c| can be printed\n", var3 );
//    } else {
//       printf("var3 = |%c| can't be printed\n", var3 );
//    }
   
//    if( isprint(var4) ) {
//       printf("var4 = |%c| can be printed\n", var4 );
//    } else {
//       printf("var4 = |%c| can't be printed\n", var4 );
//    }

//    if( isprint(var5) ) {
//       printf("var4 = |%c| can be printed\n", var4 );
//    } else {
//       printf("var4 = |%c| can't be printed\n", var4 );
//    }
   
//    return(0);
	
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	// unsigned char c = '\xa0'; // the non-breaking space in ISO-8859-1

	str1 = calloc(10, sizeof(char));
	str2 = calloc(10, sizeof(char));
	str3 = calloc(10, sizeof(char));
	str4 = calloc(10, sizeof(char));
	str5 = calloc(10, sizeof(char));
	str1 = "ABC EFGH";
	str2 = "";
	str3 = " ";
	str4 = "\t";
	str5 = "aps\r9";
	printf("str1: %s, printa: %d\n", str1, ft_str_is_printable(str1));
	printf("str2: %s, printa: %d\n", str2, ft_str_is_printable(str2));
	printf("str3: %s, espaço pode também: %d\n", str3, ft_str_is_printable(str3));
	printf("str4: \\t, não pode %d\n", ft_str_is_printable(str4));
	printf("str5: aps\\r9 não pode: %d\n", ft_str_is_printable(str5));
	return (0);

}