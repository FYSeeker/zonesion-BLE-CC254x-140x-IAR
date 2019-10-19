#ifndef __ZXBEE_H__
#define __ZXBEE_H__


int8 ZXBeeBegin(void);
int8 ZXBeeAdd(char* pt, char*pv);
char* ZXBeeEnd(void);
char* ZXBeeDecodePackage(char *pkg, int len);
int ZXBeeUserProcess(char *ptag, char *pval);
int ZXBeeSysCommandProc(char *ptag, char *pval);

extern char SENSOR_NAME[4];

#endif