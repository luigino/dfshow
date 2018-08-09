void modify_key_menu_inputs();
void modify_owner_input();
void modify_group_input();
void modify_permissions_input();
void show_directory_input();
void directory_view_menu_inputs();
void global_menu_inputs();
char * execute_argument_input(const char *exec);
void copy_file_input(char *file);
int replace_file_confirm_input(char *filename);
void rename_file_input(char *file);
void edit_file_input();
void make_directory_input();
void delete_file_confirm_input(char *file);
void delete_multi_file_confirm_input(results* ob);
void copy_multi_file_input(results* ob, char *input);
void copy_multi_file(results* ob, char *dest);
void rename_multi_file_input(results* ob, char *input);
void topLineMessage(const char *message);
void printMenu(int line, int col, char *menustring);
int huntCaseSelectInput();
void huntInput(int selected, int charcase);
void refreshDirectory(char *sortmode, int topfileref, int selected);
