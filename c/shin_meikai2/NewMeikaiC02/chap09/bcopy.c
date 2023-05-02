/* bcopy �c �t�@�C���̃R�s�[ */

#include <stdio.h>

#define BSIZE	1024			/* ���̑傫���ɕ������ăR�s�[ */

int main(int argc, char *argv[])
{
	int n;
	FILE *src, *dst;
	unsigned char buf[BSIZE];

	if (argc != 3) {
		fprintf(stderr, "Invalid parameter\n");
		fprintf(stderr, "bcopy [file you're copying from] [file you're copying to]\n");
	} else {
		if ((src = fopen(*++argv, "rb")) == NULL) {
			fprintf(stderr, "We can't open %s\n", *argv);
			return 1;
		} else if ((dst = fopen(*++argv, "wb")) == NULL) {
			fprintf(stderr, "We can't open %s\n", *argv);
			fclose(src);
			return 1;
		} else {
			while ((n = fread(buf, BSIZE, 1, src)) > 0)
				fwrite(buf, n, 1, dst);
			fclose(src);
			fclose(dst);
		}
	}
	return 0;
}
