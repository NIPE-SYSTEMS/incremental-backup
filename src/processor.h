#define DIFF_FILE "/home/hendrik/diff.txt"

void process_file(char *path);
void process_file_create_first(char *path);
void close_diff(void);
void process_file_final(char *path);
void process_file_index(char *path);
void process_file_index_saved(long long int timestamp, char *path);