//
//  main.c
//  GPStest1
//
//  Created by fuqiang on 17/6/22.
//  Copyright © 2017年 20161104605. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fp;
    char str1[70];
    char str2[70];
    char lat[9],time[7],minute[7];
    int i;
    fp=fopen("//Users//fq20161104605//Desktop//GPStest1//GPS170510.log", "r+");
    fscanf(fp,"%s%s",str1,str2);
    printf("结果：%s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("纬度：%s\n",lat);
    for(i=0;i<6;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    printf("时间：%s\n",time);
    for(i=0;i<6;i++)
        minute[i]=str1[i+51];
    minute[6]='0';
    printf("确切时间：%s\n",minute);
    fclose(fp);
    return 0;
}
