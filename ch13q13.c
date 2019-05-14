#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(){

	char website[] = "knking.com";
	char url[100];

	build_index_url(website, url);

	printf("Website: %s, Index URL: %s\n", website, url);

	return 0;
}

void build_index_url(const char *domain, char *index_url){

	strcpy(index_url, "http://www.");
	strcat(index_url, domain);
	strcat(index_url, "/index.html");

	return;
}