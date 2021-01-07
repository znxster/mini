#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pwd.h>
#include <string.h>
#include <libgen.h>

int main(int argc, char **argv) {
	struct passwd *pw;
	char *user;
	char *prog = argv[0];
	char *bprog = basename(argv[0]);

	if(argc == 2) {
		user = argv[1];
	} else if(argc == 3) {
		prog = argv[1];
		user = argv[2];
	} else {
		fprintf(stderr, "usage:\n\t%s username\n", bprog);
		fprintf(stderr, "\t%s [uid|gid|home|shell] username\n", bprog);
		exit(EXIT_FAILURE);
	}

	pw = getpwnam(user);
	
	if(pw == NULL) {
		printf("No such user found %s\n", user);
		exit(EXIT_FAILURE);
	}
	
	if((strcmp(bprog, "getuid") == 0) || (strcmp(prog, "uid") == 0)) {
		printf("%u\n", pw->pw_uid);
	} else if((strcmp(bprog, "getgid") == 0) || (strcmp(prog, "gid") == 0)) {
		printf("%u\n", pw->pw_gid);
	} else if((strcmp(bprog, "gethome") == 0) || (strcmp(prog, "home") == 0)) {
		printf("%s\n", pw->pw_dir);
	} else if((strcmp(bprog, "getshell") == 0) || (strcmp(prog, "shell") == 0)) {
		printf("%s\n", pw->pw_shell);
	} else {
		fprintf(stderr, "usage:\n\t%s username\n", bprog);
		fprintf(stderr, "\t%s [uid|gid|home|shell] username\n", bprog);
		exit(EXIT_FAILURE);
	}
	
	exit(EXIT_SUCCESS);
}
