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
    FILE *fp,*fp1;
    char str1[70];
    char str2[70];
    char lat[9],time[7],minute[7],longitude[11],speed[6];
    int i;
    fp=fopen("//Users//fq20161104605//Desktop//GPStest1//GPS170510.log", "r+");
    fp1=fopen("//Users//fq20161104605//Desktop//GPStest1//GPSTXT","w+");
    fscanf(fp,"%s%s",str1,str2);
    printf("结果：%s\n%s\n",str1,str2);
    for(i=0;i<8;i++)
        lat[i]=str1[i+16];
    lat[8]='\0';
    printf("纬度：%s\n",lat);
    fprintf(fp1,"纬度：%s\n",lat);
    for(i=0;i<6;i++)
        time[i]=str1[i+7];
    time[6]='\0';
    printf("时间：%s\n",time);
    fprintf(fp1,"时间：%s\n",time);
    for(i=0;i<6;i++)
        minute[i]=str1[i+51];
    minute[6]='\0';
    printf("地磁偏角：%s\n",minute);
    fprintf(fp1,"地磁偏角：%s\n",minute);
    for(i=0;i<10;i++)
        longitude[i]=str1[i+27];
    longitude[9]='\0';
    printf("经度：%s\n",longitude);
    fprintf(fp1,"经度：%s\n",longitude);
    for(i=0;i<5;i++)
        speed[i]=str1[i+39];
    speed[5]='\0';
    printf("地面速率：%s\n",speed);
    fprintf(fp1,"地面速率：%s\n",speed);
    fclose(fp);
    
    return 0;
}
