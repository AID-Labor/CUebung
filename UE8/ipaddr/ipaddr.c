// Übung 9.2
// IP-Adressen

#include <stdio.h>

// Umwandlung IP nach unsigned int
unsigned int ip2int(unsigned char a, unsigned char b, unsigned char c, unsigned char d)
{
    unsigned int r = 0;
    r = (unsigned int) ((a<<24)|(b<<16)|(c<<8)|d);
    return r;
}

void int2ip(unsigned int ip,unsigned char* a, unsigned char* b, unsigned char* c, unsigned char* d)
{
    *a = (unsigned char)(ip>>24);
    *b = (unsigned char)((ip>>16)&255);
    *c = (unsigned char)((ip>>8)&255);
    *d = (unsigned char)(ip&255);
}

int main()
{
	unsigned int ip;
	ip = ip2int(195,37,168,12);
        printf("IP: %u\n",ip);
	unsigned char a,b,c,d;
        int2ip(ip,&a,&b,&c,&d);
        printf("IPv4: %u.%u.%u.%u\n",a,b,c,d);
        
     	return 0;
}
