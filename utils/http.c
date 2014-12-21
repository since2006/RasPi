/*
 * http.c
 *
 *  Xuz on 2014-12-21
 */
#include <string.h>
#include <ctype.h>
#include "string_ex.h"

struct http_parsed_url {
	char *scheme;
	char *host;
	char *port;
	char *path;
	char *query;
};

char* http_normalize_url(char *url);

char* http_get(char *url) {
	char *result;

	url = http_normalize_url(url);

	return url;
}

struct http_parsed_url* http_parse_url(char *url) {
	struct http_parsed_url *purl;
	char *tmp;

	purl = malloc(sizeof(struct http_parsed_url));
	if (NULL == purl) {
		return NULL;
	}

	purl->scheme = NULL;
	purl->host = NULL;
	purl->port = NULL;
	purl->path = NULL;
	purl->query = NULL;

	int len = strlen(url);
	int sLen = 0;

	// ------ schema ------ //
	if (startWidth("http://")) {
		purl->scheme = "http";
		sLen = 7;
	} else if (startWith("https://")) {
		purl->scheme = "https";
		sLen = 8;
	} else {
		return NULL;
	}

	// ------ host ------ //
	tmp = (char*)malloc(sizeof(char) * (len + 1));

	return purl;
}

void http_parsed_url_free(struct http_parsed_url *purl) {
	if (NULL != purl) {
		if (NULL != purl->scheme) {
			free(purl->scheme);
		}
		if (NULL != purl->host) {
			free(purl->host);
		}
		if (NULL != purl->port) {
			free(purl->port);
		}
		if (NULL != purl->path) {
			free(purl->path);
		}
		if (NULL != purl->query) {
			free(purl->query);
		}
		free(purl);
	}
}

char* http_normalize_url(char *url) {
	char dest[4096];
	if (startWith("http://", url) == 0 && startWith("https://", url) == 0 ) {
		strcpy(dest, "http://");
		strcat(dest, url);
	} else {
		return url;
	}

	return dest;
}
