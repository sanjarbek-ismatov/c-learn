#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct{
    char os_name[20];
    char terminal_type[20];
    char user_name[20]; 
} Info;
// typedef struct{
//     char* os[4];
// } KeywordList;
static char* supported_systems[] = {
    "Linux",
    "Windows"
};
static Info info;
// static KeywordList keyword_list = {
//     .os = 
// };
static char* os_keys[] = {"--os", "-o"};
bool compare_options(char* target, char* items[], int size){
    for(int i = 0; i < size; i++){
        if(strcmp(target, items[i]) == 0) return true;
    }
    return false;
}
char* arg_extractor(int argc, char* argv[]){
    for(int i = 0; i < argc; i++){
        char* current_arg = argv[i];
        bool result = compare_options(argv[i], os_keys, 2);
        if(result) info.os_name = argv[i + 1]; 
    }
}
int main(int argc, char* argv[]){
    
    return 0;
}