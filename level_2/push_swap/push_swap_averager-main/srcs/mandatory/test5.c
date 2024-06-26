#include "../include/averager.h"

static int **init_permutation_table(void) {
    int count = 0;
    int *arr = malloc(sizeof(int) * 5);
    int **table = calloc(sizeof(int *), 128);
    int *is_still_going_on;
    arr[0] = -1, arr[1] = 0, arr[2] = 1, arr[3] = 2, arr[4] = 3;

    do {
        if ((is_still_going_on = next_permutation(arr, 4))) {
            if (count && (count % 24) == 0) {
                table[count] = NULL;
                count++;
            }
            table[count] = malloc(sizeof(int) * 5);
            for (int i = 0; i < 5; i++)
                table[count][i] = arr[i];
            count++;
        }
    } while (is_still_going_on);

    free(arr);
    return table;
}

static void print_averager_header(void) {
    printf(WHITE "Now here comes...\n\n" DEF_COLOR);
    printf(HGREEN "<	< THE AVERAGER >	>\n\n" DEF_COLOR);
    printf(CYAN "It'll test the number of operations\n\n" DEF_COLOR);
    sleep(3);
    printf(WHITE "TESTS FOR SIZE 5\n" DEF_COLOR);
}

static void init_this_task(t_uargs *this_task, int **table, int task_size) {
    static int call_counter = -1;
    const int thread_idxs[5] = {0, 25, 49, 73, 97};
    const char *tmp_files[5] = {"tmp1", "tmp2", "tmp3", "tmp4", "tmp5"};
    this_task->table = table;
    this_task->size = task_size;
    this_task->tmp_file = tmp_files[++call_counter];
    this_task->thread_idx = thread_idxs[call_counter];
	this_task->build_cmd_string = build_averager_test_cmd_string;
	this_task->fprintf_result_to_file = fprintf_nb_of_op;
}


int main(void) {
    pthread_t pthread[5];
    static t_args this_task[5];
    int **table = init_permutation_table();
    for (int i = 0; i < 5; i++) {
		init_this_task(&this_task[i], table, 5);
        pthread_create(&pthread[i], NULL, execute_push_swap_thread, &this_task[i]);
    }
    for (int i = 0; i < 5; i++)
        pthread_join(pthread[i], NULL);
    ft_free_arr((char **)this_task->table, (void **)this_task->table);
}
