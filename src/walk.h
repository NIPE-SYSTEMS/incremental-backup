int walk(char *path, void (*callback_process_files)(char *path), void (*callback_process_directories)(char *path));
int walk_get_error(void);