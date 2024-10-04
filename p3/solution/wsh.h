#define WSH_exit    0
#define WSH_cd      1
#define WSH_export  2
#define WSH_local   3
#define WSH_vars    4
#define WSH_history 5
#define WSH_ls      6

// built-in commands
#define EXIT    "exit"
#define CD      "cd"
#define EXPORT  "export"
#define LOCAL   "local"
#define VARS    "vars"
#define HISTORY "history"
#define LS      "ls"

int wsh_exit(size_t argc, char** args);
int wsh_cd(size_t argc, char** args);
int wsh_export(size_t argc, char** args);
int wsh_local(size_t argc, char** args);
int wsh_vars(size_t argc, char** args);
int wsh_history(size_t argc, char** args);
int wsh_ls(size_t argc, char** args);


#define NELEM(x) (sizeof(x)/sizeof((x)[0]))