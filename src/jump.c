#include <stdio.h>
#include <stdlib.h>

#define CNT (5)

int main(void) {
    FILE *tmp = tmpfile();
    int nums[CNT] = {1, 2, 3, 4, 5};
    fwrite(nums, sizeof(int), CNT, tmp);
    fseek(tmp, 0L, SEEK_SET);

    int num;
    fread(&num, sizeof(int), 1, tmp);
    printf("pos:%zd, val:%d\n", ftell(tmp), num);

    fseek(tmp, sizeof(int), SEEK_CUR);
    fread(&num, sizeof(int), 1, tmp);
    printf("pos:%zd, val:%d\n", ftell(tmp), num);

    fseek(tmp, sizeof(int), SEEK_CUR);
    fread(&num, sizeof(int), 1, tmp);
    printf("pos:%zd, val:%d\n", ftell(tmp), num);

    // fseek(tmp, sizeof(int), SEEK_CUR);
    fread(&num, sizeof(int), 1, tmp);
    printf("pos:%zd, val:%d\n", ftell(tmp), num);

    // fseek(tmp, sizeof(int), SEEK_CUR);
    fread(&num, sizeof(int), 1, tmp);
    printf("pos:%zd, val:%d\n", ftell(tmp), num);

    return EXIT_SUCCESS;
}
