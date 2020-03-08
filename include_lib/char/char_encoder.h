#ifndef CHAR_ENCODER_H

#define CHAR_ENCODER_H

int utf8ToGbk(char *inbuf, size_t inlen, char *outbuf, size_t outlen);
int gbkToUtf8(char *inbuf, size_t inlen, char *outbuf, size_t outlen);

#endif // CHAR_ENCODER_H
