#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PART_NUM (5)
#define DESCRIPTION_NUM (256)

struct _part {
    size_t num;
    char description[DESCRIPTION_NUM];
};

typedef struct _part Part;

static int num = 0;

Part part_init() {
    Part part;
    part.num = num++;
    memset(part.description, 0, DESCRIPTION_NUM);
    return part;
}

void part_print(const Part * const part) {
    printf("Part{num=%zu, description='%s'}", part->num, part->description);
}

int main(void) {

    Part parts[PART_NUM];
    for (size_t i = 0; i < PART_NUM; i++) {
        parts[i] = part_init();
    }

    FILE *tmp = tmpfile();

    rewind(tmp);
    fwrite(parts, sizeof(Part), PART_NUM, tmp);

    rewind(tmp);
    fread(parts, sizeof(Part), PART_NUM, tmp);
    for (size_t i = 0; i < PART_NUM; i++) {
        strcpy(parts[i].description, "hello world");
    }
    rewind(tmp);
    fwrite(parts, sizeof(Part), PART_NUM, tmp);

    fread(parts, sizeof(Part), PART_NUM, tmp);
    for (size_t i = 0; i < PART_NUM; i++) {
        part_print(&parts[i]);
    }

    return EXIT_SUCCESS;
}
