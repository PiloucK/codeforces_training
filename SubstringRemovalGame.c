#include <stdlib.h>

int
main (
    void )
{
    int count;
    int score;
    char buf[100];
    int sequences[100];
    int sequence_length;
    int sequence_count = 0;

    scanf("%d", &count);

    for (int i = 0; i < count; i++) {

        for (size_t j = 0; j < 100; j++) {
            sequences[j] = 0;
            buf[j] = 0;
        }

        scanf("%s", buf);

        for (int j = 0; buf[j]; j++) {
            if (buf[j] == '1') {
                sequence_count++;
                sequence_length = 1;

                for (int k = 0; buf[k + j] == '1'; k++) {
                    sequence_length++;
                }

                sequences[sequence_length]++;
            }
        }

        score = 0;

        for (int j = 0; j < sequence_count; j++) {
            for (int k = 100; k >= 0; k--) {
                if (sequences[k])
            }
        }
    }

    return (EXIT_SUCCESS);
}
