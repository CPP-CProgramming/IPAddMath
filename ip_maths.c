#include <stdio.h>
#include <string.h>

void remove_all_chars(char * str, char c) 
{
    char *pr = str, *pw =str;
    while(*pr)
    {
        *pw = *pr++;
        pw += (*pw != c);
    }
    *pw = '\0';
}


void get_broadcast_address(char* ip_addr, char mask, char* output_buffer)
{
    const char s[2] = ".";
    char * token;
    token = strtok(ip_addr, s);
    while( token != NULL){
        printf(" %s\n", token);
        token = strtok(NULL, s);
    }
}

int main(void)
{
    const int PREFIX_LEN = 16;
    char ipadd_buffer[PREFIX_LEN];
    memset(ipadd_buffer, 0, PREFIX_LEN);
    char *ip_add = "192.168.2.10";
    char mask = 20;
    get_broadcast_address(ip_add, mask, ipadd_buffer);
    //printf("Broadcast address = %s\n", ipadd_buffer);
    return 0;
}
