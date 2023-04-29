typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef int    wchar_t;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[20];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct _IO_FILE FILE;

typedef struct stat stat, *Pstat;

typedef ulong __dev_t;

typedef ulong __ino_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat {
    __dev_t st_dev;
    __ino_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef void (* __sighandler_t)(int);

typedef int nl_item;

typedef struct __dirstream __dirstream, *P__dirstream;

struct __dirstream {
};

typedef struct __dirstream DIR;

typedef struct dirent dirent, *Pdirent;

struct dirent {
    __ino_t d_ino;
    __off_t d_off;
    ushort d_reclen;
    uchar d_type;
    char d_name[256];
};

typedef enum Elf_ProgramHeaderType {
    PT_NULL=0,
    PT_LOAD=1,
    PT_DYNAMIC=2,
    PT_INTERP=3,
    PT_NOTE=4,
    PT_SHLIB=5,
    PT_PHDR=6,
    PT_TLS=7,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_STACK=1685382481,
    PT_GNU_RELRO=1685382482
} Elf_ProgramHeaderType;

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

typedef enum Elf64_DynTag {
    DT_NULL=0,
    DT_NEEDED=1,
    DT_PLTRELSZ=2,
    DT_PLTGOT=3,
    DT_HASH=4,
    DT_STRTAB=5,
    DT_SYMTAB=6,
    DT_RELA=7,
    DT_RELASZ=8,
    DT_RELAENT=9,
    DT_STRSZ=10,
    DT_SYMENT=11,
    DT_INIT=12,
    DT_FINI=13,
    DT_SONAME=14,
    DT_RPATH=15,
    DT_SYMBOLIC=16,
    DT_REL=17,
    DT_RELSZ=18,
    DT_RELENT=19,
    DT_PLTREL=20,
    DT_DEBUG=21,
    DT_TEXTREL=22,
    DT_JMPREL=23,
    DT_BIND_NOW=24,
    DT_INIT_ARRAY=25,
    DT_FINI_ARRAY=26,
    DT_INIT_ARRAYSZ=27,
    DT_FINI_ARRAYSZ=28,
    DT_RUNPATH=29,
    DT_FLAGS=30,
    DT_PREINIT_ARRAY=32,
    DT_PREINIT_ARRAYSZ=33,
    DT_RELRSZ=35,
    DT_RELR=36,
    DT_RELRENT=37,
    DT_ANDROID_REL=1610612751,
    DT_ANDROID_RELSZ=1610612752,
    DT_ANDROID_RELA=1610612753,
    DT_ANDROID_RELASZ=1610612754,
    DT_ANDROID_RELR=1879040000,
    DT_ANDROID_RELRSZ=1879040001,
    DT_ANDROID_RELRENT=1879040003,
    DT_GNU_PRELINKED=1879047669,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_CHECKSUM=1879047672,
    DT_PLTPADSZ=1879047673,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_FEATURE_1=1879047676,
    DT_POSFLAG_1=1879047677,
    DT_SYMINSZ=1879047678,
    DT_SYMINENT=1879047679,
    DT_GNU_XHASH=1879047924,
    DT_GNU_HASH=1879047925,
    DT_TLSDESC_PLT=1879047926,
    DT_TLSDESC_GOT=1879047927,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_LIBLIST=1879047929,
    DT_CONFIG=1879047930,
    DT_DEPAUDIT=1879047931,
    DT_AUDIT=1879047932,
    DT_PLTPAD=1879047933,
    DT_MOVETAB=1879047934,
    DT_SYMINFO=1879047935,
    DT_VERSYM=1879048176,
    DT_RELACOUNT=1879048185,
    DT_RELCOUNT=1879048186,
    DT_FLAGS_1=1879048187,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_AUXILIARY=2147483645,
    DT_FILTER=2147483647
} Elf64_DynTag;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_NULL=0,
    SHT_PROGBITS=1,
    SHT_SYMTAB=2,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_HASH=5,
    SHT_DYNAMIC=6,
    SHT_NOTE=7,
    SHT_NOBITS=8,
    SHT_REL=9,
    SHT_SHLIB=10,
    SHT_DYNSYM=11,
    SHT_INIT_ARRAY=14,
    SHT_FINI_ARRAY=15,
    SHT_PREINIT_ARRAY=16,
    SHT_GROUP=17,
    SHT_SYMTAB_SHNDX=18,
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_CHECKSUM=1879048184,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_syminfo=1879048188,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Gnu_BuildId Gnu_BuildId, *PGnu_BuildId;

struct Gnu_BuildId {
    dword namesz; // Length of name field
    dword descsz; // Length of description field
    dword type; // Vendor specific type
    char name[4]; // Build-id vendor name
    byte description[20]; // Build-id value
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};




void __DT_INIT(void)

{
  __gmon_start__();
  return;
}



void FUN_00402020(void)

{
                    // WARNING: Treating indirect jump as call
  (*(code *)(undefined *)0x0)();
  return;
}



void __strcat_chk(void)

{
  __strcat_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * getenv(char *__name)

{
  char *pcVar1;
  
  pcVar1 = getenv(__name);
  return pcVar1;
}



void __snprintf_chk(void)

{
  __snprintf_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = raise(__sig);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



void __vfprintf_chk(void)

{
  __vfprintf_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int unlink(char *__name)

{
  int iVar1;
  
  iVar1 = unlink(__name);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncpy(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__off_t ftello(FILE *__stream)

{
  __off_t _Var1;
  
  _Var1 = ftello(__stream);
  return _Var1;
}



void inflate(void)

{
  inflate();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int mkdir(char *__path,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = mkdir(__path,__mode);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int ferror(FILE *__stream)

{
  int iVar1;
  
  iVar1 = ferror(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  size_t sVar1;
  
  sVar1 = fread(__ptr,__size,__n,__stream);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t mbstowcs(wchar_t *__pwcs,char *__s,size_t __n)

{
  size_t sVar1;
  
  sVar1 = mbstowcs(__pwcs,__s,__n);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

ssize_t readlink(char *__path,char *__buf,size_t __len)

{
  ssize_t sVar1;
  
  sVar1 = readlink(__path,__buf,__len);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int setenv(char *__name,char *__value,int __replace)

{
  int iVar1;
  
  iVar1 = setenv(__name,__value,__replace);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t getpid(void)

{
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

DIR * opendir(char *__name)

{
  DIR *pDVar1;
  
  pDVar1 = opendir(__name);
  return pDVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * stpcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = stpcpy(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int rmdir(char *__path)

{
  int iVar1;
  
  iVar1 = rmdir(__path);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __lxstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __lxstat(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void setbuf(FILE *__stream,char *__buf)

{
  setbuf(__stream,__buf);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * dirname(char *__path)

{
  char *pcVar1;
  
  pcVar1 = dirname(__path);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strncat(char *__dest,char *__src,size_t __n)

{
  char *pcVar1;
  
  pcVar1 = strncat(__dest,__src,__n);
  return pcVar1;
}



void __realpath_chk(void)

{
  __realpath_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int closedir(DIR *__dirp)

{
  int iVar1;
  
  iVar1 = closedir(__dirp);
  return iVar1;
}



void __strdup(void)

{
  __strdup();
  return;
}



void __libc_start_main(void)

{
  __libc_start_main();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

wchar_t * wcsncpy(wchar_t *__dest,wchar_t *__src,size_t __n)

{
  wchar_t *pwVar1;
  
  pwVar1 = wcsncpy(__dest,__src,__n);
  return pwVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int strcmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}



void __memcpy_chk(void)

{
  __memcpy_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int feof(FILE *__stream)

{
  int iVar1;
  
  iVar1 = feof(__stream);
  return iVar1;
}



void __gmon_start__(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void clearerr(FILE *__stream)

{
  clearerr(__stream);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * realpath(char *__name,char *__resolved)

{
  char *pcVar1;
  
  pcVar1 = realpath(__name,__resolved);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int prctl(int __option,...)

{
  int iVar1;
  
  iVar1 = prctl(__option);
  return iVar1;
}



void inflateEnd(void)

{
  inflateEnd();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int kill(__pid_t __pid,int __sig)

{
  int iVar1;
  
  iVar1 = kill(__pid,__sig);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * __xpg_basename(char *__path)

{
  char *pcVar1;
  
  pcVar1 = __xpg_basename(__path);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fileno(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fileno(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int __xstat(int __ver,char *__filename,stat *__stat_buf)

{
  int iVar1;
  
  iVar1 = __xstat(__ver,__filename,__stat_buf);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

dirent * readdir(DIR *__dirp)

{
  dirent *pdVar1;
  
  pdVar1 = readdir(__dirp);
  return pdVar1;
}



void dlopen(void)

{
  dlopen();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fflush(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fflush(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * nl_langinfo(nl_item __item)

{
  char *pcVar1;
  
  pcVar1 = nl_langinfo(__item);
  return pcVar1;
}



void __vsnprintf_chk(void)

{
  __vsnprintf_chk();
  return;
}



void dlclose(void)

{
  dlclose();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



void __strcpy_chk(void)

{
  __strcpy_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * mkdtemp(char *__template)

{
  char *pcVar1;
  
  pcVar1 = mkdtemp(__template);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * setlocale(int __category,char *__locale)

{
  char *pcVar1;
  
  pcVar1 = setlocale(__category,__locale);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fchmod(int __fd,__mode_t __mode)

{
  int iVar1;
  
  iVar1 = fchmod(__fd,__mode);
  return iVar1;
}



void inflateInit_(void)

{
  inflateInit_();
  return;
}



void __fread_chk(void)

{
  __fread_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)

{
  __pid_t _Var1;
  
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int fseeko(FILE *__stream,__off_t __off,int __whence)

{
  int iVar1;
  
  iVar1 = fseeko(__stream,__off,__whence);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

void perror(char *__s)

{
  perror(__s);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strtok(char *__s,char *__delim)

{
  char *pcVar1;
  
  pcVar1 = strtok(__s,__delim);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = unsetenv(__name);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int execvp(char *__file,char **__argv)

{
  int iVar1;
  
  iVar1 = execvp(__file,__argv);
  return iVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strcat(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcat(__dest,__src);
  return pcVar1;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  size_t sVar1;
  
  sVar1 = fwrite(__ptr,__size,__n,__s);
  return sVar1;
}



void __fprintf_chk(void)

{
  __fprintf_chk();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



void dlsym(void)

{
  dlsym();
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

__pid_t fork(void)

{
  __pid_t _Var1;
  
  _Var1 = fork();
  return _Var1;
}



void dlerror(void)

{
  dlerror();
  return;
}



void FUN_00402530(void)

{
  do {
    invalidInstructionException();
  } while( true );
}



undefined4 thunk_FUN_00403df0(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  char *__ptr;
  void *__ptr_00;
  FILE *__stream;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uStack_3050;
  undefined8 auStack_3048 [2];
  char acStack_3038 [4096];
  char acStack_2038 [4096];
  undefined auStack_1038 [4104];
  
  uStack_3050 = 0;
  lVar3 = FUN_004030d0();
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_004045b0(acStack_3038,*param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_00404680(auStack_1038,acStack_3038);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = thunk_FUN_00404310(acStack_2038,acStack_3038);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  bVar7 = false;
  pcVar4 = (char *)FUN_00406f80("_MEIPASS2");
  if (pcVar4 != (char *)0x0) {
    bVar7 = true;
    __ptr = (char *)FUN_00406f80("_PYI_ONEDIR_MODE");
    if (__ptr != (char *)0x0) {
      bVar7 = true;
      if (*__ptr == '1') {
        bVar7 = __ptr[1] != '\0';
      }
      free(__ptr);
      unsetenv("_PYI_ONEDIR_MODE");
    }
  }
  unsetenv("_MEIPASS2");
  iVar1 = FUN_00402fd0(lVar3,acStack_3038);
  if (iVar1 == 0) {
    iVar1 = FUN_00402fd0(lVar3,auStack_1038,acStack_3038);
    if (iVar1 == 0) {
      FUN_00403350("Cannot open PyInstaller archive from executable (%s) or external archive (%s)\n"
                   ,acStack_3038,auStack_1038);
      return 0xffffffff;
    }
    if (pcVar4 != (char *)0x0) {
      __ptr_00 = (void *)FUN_00406f80("_PYI_PROCNAME");
      if (__ptr_00 == (void *)0x0) {
        unsetenv("_PYI_PROCNAME");
        *(undefined4 *)(lVar3 + 0x5080) = param_1;
        *(undefined8 **)(lVar3 + 0x5088) = param_2;
        goto LAB_00403f57;
      }
LAB_00403f13:
      iVar1 = prctl(0xf,__ptr_00,0,0);
      if (iVar1 != 0) {
        FUN_00403350("LOADER: failed to set linux process name!\n");
        return 0xffffffff;
      }
      free(__ptr_00);
      goto LAB_00403f36;
    }
    __stream = fopen(acStack_3038,"rb");
    uVar6 = 0xffffffff;
    if (__stream == (FILE *)0x0) {
LAB_00404285:
      FUN_00403350("Cannot side-load external archive %s (code %d)!\n",auStack_1038,uVar6);
      return 0xffffffff;
    }
    auStack_3048[0] = 0xe0b0a0b0d49454d;
    lVar5 = FUN_00407ac0(__stream,auStack_3048,8);
    if (lVar5 == 0) {
      fclose(__stream);
      uVar6 = 1;
      goto LAB_00404285;
    }
    __ptr_00 = (void *)FUN_00406f80("_PYI_PROCNAME");
    if (__ptr_00 != (void *)0x0) goto LAB_00403f13;
    unsetenv("_PYI_PROCNAME");
    *(undefined4 *)(lVar3 + 0x5080) = param_1;
    *(undefined8 **)(lVar3 + 0x5088) = param_2;
  }
  else {
    __ptr_00 = (void *)FUN_00406f80("_PYI_PROCNAME");
    if (__ptr_00 != (void *)0x0) goto LAB_00403f13;
LAB_00403f36:
    unsetenv("_PYI_PROCNAME");
    *(undefined4 *)(lVar3 + 0x5080) = param_1;
    *(undefined8 **)(lVar3 + 0x5088) = param_2;
    if (pcVar4 != (char *)0x0) goto LAB_00403f57;
  }
  iVar1 = FUN_004039c0(lVar3);
  if (iVar1 == 0) {
    FUN_00406fb0("_MEIPASS2",acStack_2038);
    FUN_00406fb0("_PYI_ONEDIR_MODE",&DAT_004085b4);
    iVar1 = FUN_004075b0(lVar3);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    iVar1 = FUN_00407750(acStack_3038,param_1,param_2);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
LAB_00403f57:
  uStack_3050 = FUN_00406250();
  if ((bVar7) || (iVar1 = FUN_00405d80(uStack_3050,lVar3,0), iVar1 != 0)) {
    FUN_00406290(&uStack_3050);
  }
  else {
    iVar1 = FUN_00405fb0(lVar3,uStack_3050);
    if ((iVar1 == 0) && (iVar1 = FUN_004061f0(uStack_3050), iVar1 == 0)) {
      FUN_004064e0(uStack_3050,acStack_3038);
    }
    else {
      FUN_004063d0(uStack_3050);
      FUN_00406290(&uStack_3050);
    }
  }
  if (pcVar4 != (char *)0x0) {
    iVar1 = strcmp(acStack_2038,pcVar4);
    if (iVar1 != 0) {
      iVar1 = snprintf((char *)(lVar3 + 0x3078),0x1000,"%s",pcVar4);
      if (0xfff < iVar1) {
        return 0xffffffff;
      }
      *(undefined4 *)(lVar3 + 0x5078) = 1;
      __strcpy_chk(lVar3 + 0x4078,(char *)(lVar3 + 0x3078),0x1000);
    }
    FUN_00403cf0(lVar3);
    uVar2 = FUN_00403d00(lVar3);
    thunk_FUN_00405b10(lVar3);
    FUN_004063d0(uStack_3050);
    FUN_00406290(&uStack_3050);
    return uVar2;
  }
  iVar1 = FUN_00403a20(lVar3,uStack_3050);
  if (iVar1 == 0) {
    pcVar4 = acStack_2038;
    if (*(char *)(lVar3 + 0x3078) != '\0') {
      pcVar4 = (char *)(lVar3 + 0x3078);
    }
    FUN_00406fb0("_MEIPASS2",pcVar4);
    iVar1 = prctl(0x10,auStack_3048,0,0);
    if (iVar1 == 0) {
      FUN_00406fb0("_PYI_PROCNAME",auStack_3048);
    }
    iVar1 = FUN_004075b0(lVar3);
    if (iVar1 != -1) {
      FUN_00403de0();
      uVar2 = FUN_00407780(acStack_3038,lVar3,param_1,param_2);
      FUN_004063d0(uStack_3050);
      FUN_00406290(&uStack_3050);
      if (*(int *)(lVar3 + 0x5078) == 1) {
        FUN_00407130(lVar3 + 0x3078);
      }
      FUN_00403110(lVar3);
      FUN_00407660();
      return uVar2;
    }
  }
  return 0xffffffff;
}



void FUN_00402545(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_retaddr;
  undefined auStack_8 [8];
  
  __libc_start_main(thunk_FUN_00403df0,unaff_retaddr,&stack0x00000008,FUN_00407bf0,FUN_00407c60,
                    param_3,auStack_8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0040257d)
// WARNING: Removing unreachable block (ram,0x00402587)

void FUN_00402570(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x004025bf)
// WARNING: Removing unreachable block (ram,0x004025c9)

void FUN_004025a0(void)

{
  return;
}



void FUN_004025e0(void)

{
  if (DAT_0040d2b8 == '\0') {
    FUN_00402570();
    DAT_0040d2b8 = 1;
    return;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004025bf)
// WARNING: Removing unreachable block (ram,0x004025c9)

void thunk_FUN_004025a0(void)

{
  return;
}



int FUN_00402620(FILE **param_1,long param_2,FILE *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  undefined8 *__ptr_00;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  byte bVar12;
  undefined8 *local_c0;
  void *local_a8;
  undefined4 local_a0;
  undefined8 *local_90;
  uint local_88;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  bVar12 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_a0 = 0;
  local_a8 = (void *)0x0;
  iVar1 = inflateInit_(&local_a8,"1.2.13",0x70);
  if (iVar1 == 0) {
    __ptr = malloc(0x2000);
    if (__ptr == (void *)0x0) {
      __ptr_00 = (undefined8 *)0x0;
      FUN_00403420("malloc","Failed to extract %s: failed to allocate temporary input buffer!\n",
                   param_2 + 0x12);
    }
    else {
      __ptr_00 = (undefined8 *)malloc(0x2000);
      if (__ptr_00 == (undefined8 *)0x0) {
        FUN_00403420("malloc","Failed to extract %s: failed to allocate temporary output buffer!\n",
                     param_2 + 0x12);
      }
      else {
        uVar11 = (ulong)*(uint *)(param_2 + 8);
        local_c0 = param_4;
        do {
          uVar10 = 0x2000;
          if (uVar11 < 0x2001) {
            uVar10 = uVar11;
          }
          uVar4 = __fread_chk(__ptr,0x2000,1,uVar10,*param_1);
          if ((uVar10 != uVar4) || (iVar1 = ferror(*param_1), iVar1 != 0)) {
            iVar1 = -1;
            goto LAB_00402808;
          }
          local_a0 = (undefined4)uVar10;
          local_a8 = __ptr;
          do {
            local_88 = 0x2000;
            local_90 = __ptr_00;
            iVar2 = inflate(&local_a8,0);
            if (iVar2 < -1) {
              if (-5 < iVar2) goto LAB_004027ea;
            }
            else if (iVar2 == 2) {
              iVar2 = -3;
              goto LAB_004027ea;
            }
            lVar6 = -(ulong)local_88;
            uVar4 = lVar6 + 0x2000;
            if (param_3 == (FILE *)0x0) {
              if (local_c0 != (undefined8 *)0x0) {
                if (uVar4 < 8) {
                  if ((uVar4 & 4) == 0) {
                    if ((uVar4 != 0) &&
                       (*(undefined *)local_c0 = *(undefined *)__ptr_00, (uVar4 & 2) != 0)) {
                      *(undefined2 *)((long)local_c0 + lVar6 + 0x1ffe) =
                           *(undefined2 *)((long)__ptr_00 + lVar6 + 0x1ffe);
                    }
                  }
                  else {
                    *(undefined4 *)local_c0 = *(undefined4 *)__ptr_00;
                    *(undefined4 *)((long)local_c0 + lVar6 + 0x1ffc) =
                         *(undefined4 *)((long)__ptr_00 + lVar6 + 0x1ffc);
                  }
                }
                else {
                  *local_c0 = *__ptr_00;
                  *(undefined8 *)((long)local_c0 + lVar6 + 0x1ff8) =
                       *(undefined8 *)((long)__ptr_00 + lVar6 + 0x1ff8);
                  lVar6 = (long)local_c0 -
                          (long)(undefined8 *)((ulong)(local_c0 + 1) & 0xfffffffffffffff8);
                  puVar8 = (undefined8 *)((long)__ptr_00 - lVar6);
                  puVar9 = (undefined8 *)((ulong)(local_c0 + 1) & 0xfffffffffffffff8);
                  for (uVar7 = lVar6 + uVar4 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + (ulong)bVar12 * -2 + 1;
                    puVar9 = puVar9 + (ulong)bVar12 * -2 + 1;
                  }
                }
                local_c0 = (undefined8 *)((long)local_c0 + uVar4);
              }
            }
            else {
              sVar5 = fwrite(__ptr_00,1,uVar4,param_3);
              if ((sVar5 != uVar4) || (iVar3 = ferror(param_3), iVar3 != 0)) {
                iVar2 = -1;
                goto LAB_004027ea;
              }
            }
          } while (local_88 == 0);
          uVar11 = uVar11 - uVar10;
          if (iVar2 == 1) goto LAB_00402808;
        } while (uVar11 != 0);
        if (iVar2 != 1) {
LAB_004027ea:
          iVar1 = -1;
          FUN_00403350("Failed to extract %s: decompression resulted in return code %d!\n",
                       param_2 + 0x12,iVar2);
        }
      }
    }
LAB_00402808:
    inflateEnd(&local_a8);
    free(__ptr);
    free(__ptr_00);
    iVar2 = iVar1;
  }
  else {
    iVar2 = -1;
    FUN_00403350("Failed to extract %s: inflateInit() failed with return code %d!\n",param_2 + 0x12,
                 iVar1);
  }
  return iVar2;
}



ulong FUN_00402970(long param_1,int *param_2)

{
  ulong uVar1;
  
  uVar1 = (long)*param_2 + (long)param_2;
  if (*(ulong *)(param_1 + 0x10) < uVar1 || *(ulong *)(param_1 + 0x10) == uVar1) {
    return uVar1;
  }
  FUN_00403350("Cannot read Table of Contents.\n");
  return *(ulong *)(param_1 + 0x18);
}



void * FUN_004029a0(FILE **param_1,long param_2)

{
  void *__ptr;
  int iVar1;
  void *__ptr_00;
  size_t sVar2;
  FILE *pFVar3;
  ulong __size;
  size_t __size_00;
  
  pFVar3 = *param_1;
  if (pFVar3 == (FILE *)0x0) {
    pFVar3 = fopen((char *)(param_1 + 0xf),"rb");
    *param_1 = pFVar3;
    if (pFVar3 == (FILE *)0x0) {
      FUN_00403350("Failed to extract %s: failed to open archive file!\n",param_2 + 0x12);
      return (void *)0x0;
    }
  }
  iVar1 = fseeko(pFVar3,(long)&param_1[1]->_flags + (ulong)*(uint *)(param_2 + 4),0);
  if (iVar1 < 0) {
    FUN_00403420("fseek","Failed to extract %s: failed to seek to the entry\'s data!\n",
                 param_2 + 0x12);
    return (void *)0x0;
  }
  __size = (ulong)*(uint *)(param_2 + 0xc);
  __ptr_00 = malloc(__size);
  if (__ptr_00 == (void *)0x0) {
    FUN_00403420("malloc","Failed to extract %s: failed to allocate data buffer (%u bytes)!\n",
                 param_2 + 0x12,__size);
  }
  else {
    __ptr = __ptr_00;
    if (*(char *)(param_2 + 0x10) == '\x01') {
      iVar1 = FUN_00402620(param_1,param_2,0,__ptr_00);
      if (iVar1 == 0) {
        pFVar3 = *param_1;
        goto joined_r0x00402a79;
      }
LAB_00402a67:
      free(__ptr_00);
      __ptr_00 = (void *)0x0;
    }
    else {
      for (; __size != 0; __size = __size - __size_00) {
        __size_00 = 0x2000;
        if (__size < 0x2001) {
          __size_00 = __size;
        }
        sVar2 = fread(__ptr,__size_00,1,*param_1);
        if (sVar2 == 0) {
          FUN_00403420("fread","Failed to extract %s: failed to read data chunk!\n",param_2 + 0x12);
          goto LAB_00402a67;
        }
        __ptr = (void *)((long)__ptr + __size_00);
      }
    }
  }
  pFVar3 = *param_1;
joined_r0x00402a79:
  if (pFVar3 != (FILE *)0x0) {
    fclose(pFVar3);
    *param_1 = (FILE *)0x0;
  }
  return __ptr_00;
}



undefined4 FUN_00402b50(FILE **param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  FILE *__s;
  void *__ptr;
  size_t sVar4;
  long lVar5;
  FILE *__stream;
  ulong uVar6;
  size_t __size;
  
  iVar2 = FUN_00407020();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  lVar1 = param_2 + 0x12;
  __s = (FILE *)FUN_00407280(param_1 + 0x60f,lVar1);
  if (__s == (FILE *)0x0) {
    FUN_00403420("fopen","Failed to extract %s: failed to open target file!\n",lVar1);
    return 0xffffffff;
  }
  __stream = *param_1;
  if (__stream == (FILE *)0x0) {
    __stream = fopen((char *)(param_1 + 0xf),"rb");
    *param_1 = __stream;
    if (__stream == (FILE *)0x0) {
      uVar3 = 0xffffffff;
      FUN_00403350("Failed to extract %s: failed to open archive file!\n",lVar1);
      goto LAB_00402c97;
    }
  }
  iVar2 = fseeko(__stream,(long)&param_1[1]->_flags + (ulong)*(uint *)(param_2 + 4),0);
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
    FUN_00403420("fseek","Failed to extract %s: failed to seek to the entry\'s data!\n",lVar1);
  }
  else {
    if (*(char *)(param_2 + 0x10) == '\x01') {
      uVar3 = FUN_00402620(param_1,param_2,__s,0);
    }
    else {
      __ptr = malloc(0x2000);
      if (__ptr == (void *)0x0) {
        uVar3 = 0xffffffff;
        FUN_00403420("malloc","Failed to extract %s: failed to allocate temporary buffer!\n",lVar1);
      }
      else {
        for (uVar6 = (ulong)*(uint *)(param_2 + 0xc); uVar6 != 0; uVar6 = uVar6 - __size) {
          __size = 0x2000;
          if (uVar6 < 0x2001) {
            __size = uVar6;
          }
          lVar5 = __fread_chk(__ptr,0x2000,__size,1,*param_1);
          if (lVar5 == 0) {
            uVar3 = 0xffffffff;
            FUN_00403420("fread","Failed to extract %s: failed to read data chunk!\n",lVar1);
            goto LAB_00402c63;
          }
          sVar4 = fwrite(__ptr,__size,1,__s);
          if (sVar4 == 0) {
            uVar3 = 0xffffffff;
            FUN_00403420("fwrite","Failed to extract %s: failed to write data chunk!\n",lVar1);
            goto LAB_00402c63;
          }
        }
        uVar3 = 0;
LAB_00402c63:
        free(__ptr);
      }
    }
    iVar2 = fileno(__s);
    fchmod(iVar2,0x1c0);
  }
LAB_00402c97:
  if (*param_1 != (FILE *)0x0) {
    fclose(*param_1);
    *param_1 = (FILE *)0x0;
  }
  fclose(__s);
  return uVar3;
}



undefined4 FUN_00402da0(FILE **param_1)

{
  uint uVar1;
  uint uVar2;
  FILE *pFVar3;
  int iVar4;
  uint uVar5;
  long __off;
  size_t sVar6;
  uint uVar7;
  FILE *pFVar8;
  undefined8 local_20 [2];
  
  pFVar8 = *param_1;
  if (pFVar8 == (FILE *)0x0) {
    pFVar8 = fopen((char *)(param_1 + 0xf),"rb");
    *param_1 = pFVar8;
    if (pFVar8 == (FILE *)0x0) {
      return 0xffffffff;
    }
  }
  local_20[0] = 0xe0b0a0b0c49454d;
  __off = FUN_00407ac0(pFVar8,local_20,8);
  if (__off != 0) {
    iVar4 = fseeko(*param_1,__off,0);
    if (-1 < iVar4) {
      sVar6 = fread(param_1 + 4,0x58,1,*param_1);
      if (sVar6 == 0) {
        FUN_00403420("fread","Failed to read cookie!\n");
        return 0xffffffff;
      }
      uVar1 = *(uint *)(param_1 + 5);
      uVar5 = *(uint *)(param_1 + 6);
      *(undefined4 *)((long)param_1 + 0x507c) = 0;
      uVar2 = *(uint *)((long)param_1 + 0x2c);
      uVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      *(uint *)(param_1 + 5) = uVar7;
      *(uint *)(param_1 + 6) =
           uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar1 = *(uint *)((long)param_1 + 0x34);
      pFVar8 = (FILE *)((__off + 0x58) - (ulong)uVar7);
      uVar5 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      param_1[1] = pFVar8;
      DAT_0040d2bc = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18
      ;
      *(uint *)((long)param_1 + 0x2c) = uVar5;
      *(uint *)((long)param_1 + 0x34) = DAT_0040d2bc;
      fseeko(*param_1,(long)&pFVar8->_flags + (ulong)uVar5,0);
      iVar4 = *(int *)(param_1 + 6);
      pFVar8 = (FILE *)malloc((long)iVar4);
      param_1[2] = pFVar8;
      if (pFVar8 == (FILE *)0x0) {
        FUN_00403420("malloc","Could not allocate buffer for TOC!\n");
        return 0xffffffff;
      }
      sVar6 = fread(pFVar8,(long)iVar4,1,*param_1);
      if (sVar6 == 0) {
        FUN_00403420("fread","Could not read full TOC!\n");
        return 0xffffffff;
      }
      param_1[3] = (FILE *)((long)&param_1[2]->_flags + (long)*(int *)(param_1 + 6));
      iVar4 = ferror(*param_1);
      if (iVar4 != 0) {
        FUN_00403350("Error on file.\n");
        return 0xffffffff;
      }
      pFVar8 = param_1[2];
      pFVar3 = param_1[3];
      do {
        if (pFVar3 <= pFVar8) goto LAB_00402f10;
        uVar1 = *(uint *)&pFVar8->field_0x4;
        uVar5 = pFVar8->_flags;
        *(uint *)&pFVar8->field_0x4 =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uVar1 = *(uint *)&pFVar8->_IO_read_ptr;
        uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
        pFVar8->_flags = uVar5;
        *(uint *)&pFVar8->_IO_read_ptr =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uVar1 = *(uint *)((long)&pFVar8->_IO_read_ptr + 4);
        *(uint *)((long)&pFVar8->_IO_read_ptr + 4) =
             uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        pFVar8 = (FILE *)((long)&pFVar8->_flags + (long)(int)uVar5);
      } while (param_1[2] <= pFVar8);
      FUN_00403350("Cannot read Table of Contents.\n");
LAB_00402f10:
      if (*param_1 != (FILE *)0x0) {
        fclose(*param_1);
        *param_1 = (FILE *)0x0;
        return 0;
      }
      return 0;
    }
    FUN_00403420("fseek","Failed to seek to cookie position!\n");
  }
  return 0xffffffff;
}



undefined8 FUN_00402fd0(FILE **param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = snprintf((char *)(param_1 + 0xf),0x1000,"%s",param_2);
  if ((iVar1 < 0x1000) &&
     (iVar1 = snprintf((char *)(param_1 + 0x20f),0x1000,"%s",param_3), iVar1 < 0x1000)) {
    FUN_00404310(param_1 + 0x40f,param_2);
    *(undefined4 *)(param_1 + 0xa0f) = 0;
    __strcpy_chk(param_1 + 0x80f,param_1 + 0x40f,0x1000);
    iVar1 = FUN_00402da0(param_1);
    if (iVar1 == 0) {
      return 1;
    }
    if (*param_1 != (FILE *)0x0) {
      fclose(*param_1);
      *param_1 = (FILE *)0x0;
    }
  }
  return 0;
}



undefined8 FUN_00403090(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



ulong FUN_004030a0(long param_1,int *param_2)

{
  ulong uVar1;
  
  uVar1 = (long)*param_2 + (long)param_2;
  if (*(ulong *)(param_1 + 0x18) < uVar1 || *(ulong *)(param_1 + 0x18) == uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_004030c0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



void * FUN_004030d0(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x5090);
  if (pvVar1 == (void *)0x0) {
    FUN_00403420("calloc","Cannot allocate memory for ARCHIVE_STATUS\n");
  }
  return pvVar1;
}



void FUN_00403110(FILE **param_1)

{
  if (param_1 != (FILE **)0x0) {
    if (param_1[2] != (FILE *)0x0) {
      free(param_1[2]);
    }
    if (*param_1 != (FILE *)0x0) {
      fclose(*param_1);
    }
    free(param_1);
    return;
  }
  return;
}



char * FUN_00403150(long param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  size_t __n;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  __n = strlen(param_2);
  piVar1 = *(int **)(param_1 + 0x18);
  do {
    if (piVar1 <= piVar3) {
      return (char *)0x0;
    }
    if (*(char *)((long)piVar3 + 0x11) == 'o') {
      iVar2 = strncmp((char *)((long)piVar3 + 0x12),param_2,__n);
      if (iVar2 == 0) {
        return (char *)((long)piVar3 + 0x12) +
               ((__n + 1) - (ulong)(*(char *)((long)piVar3 + __n + 0x12) == '\0'));
      }
    }
    piVar3 = (int *)((long)piVar3 + (long)*piVar3);
  } while (*(int **)(param_1 + 0x10) <= piVar3);
  FUN_00403350("Cannot read Table of Contents.\n");
  return (char *)0x0;
}



int * FUN_00403200(long param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  piVar1 = *(int **)(param_1 + 0x18);
  while( true ) {
    if (piVar1 <= piVar3) {
      return (int *)0x0;
    }
    iVar2 = strcmp((char *)((long)piVar3 + 0x12),param_2);
    if (iVar2 == 0) break;
    piVar3 = (int *)((long)piVar3 + (long)*piVar3);
    if (piVar3 < *(int **)(param_1 + 0x10)) {
      FUN_00403350("Cannot read Table of Contents.\n");
      return (int *)0x0;
    }
  }
  return piVar3;
}



void FUN_00403280(undefined8 param_1,undefined8 param_2)

{
  __vfprintf_chk(stderr,1,param_1,param_2);
  return;
}



void FUN_004032a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c8 = &stack0x00000008;
  local_c0 = local_b8;
  local_d0 = 8;
  local_cc = 0x30;
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  __vfprintf_chk(stderr,1,param_9,&local_d0);
  return;
}



void FUN_00403350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  __pid_t _Var1;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  _Var1 = getpid();
  __fprintf_chk(stderr,1,"[%d] ",_Var1);
  local_c8 = &stack0x00000008;
  local_c0 = local_b8;
  local_d0 = 8;
  local_cc = 0x30;
  __vfprintf_chk(stderr,1,param_9,&local_d0);
  return;
}



void FUN_00403420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined *local_c0;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c8 = &stack0x00000008;
  local_c0 = local_b8;
  local_d0 = 0x10;
  local_cc = 0x30;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  __vfprintf_chk(stderr,1,param_10,&local_d0);
  perror(param_9);
  return;
}



int FUN_004034d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                char *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int iVar1;
  undefined4 local_160;
  undefined4 local_15c;
  undefined *local_158;
  undefined *local_150;
  stat local_148;
  undefined local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_158 = &stack0x00000008;
  local_160 = 0x10;
  local_150 = local_b8;
  local_15c = 0x30;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  iVar1 = __vsnprintf_chk(param_9,0x1000,1,0xffffffffffffffff,param_10,&local_160);
  if (iVar1 < 0x1000) {
    iVar1 = __xstat(1,param_9,&local_148);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



undefined8 FUN_004035c0(char *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = snprintf(param_1,0x1000,"%s",param_3);
  if ((iVar1 < 0x1000) && (pcVar2 = strchr(param_1,0x3a), pcVar2 != (char *)0x0)) {
    *pcVar2 = '\0';
    strcpy(param_2,pcVar2 + 1);
    if ((*param_1 != '\0') && (*param_2 != '\0')) {
      return 0;
    }
  }
  return 0xffffffff;
}



undefined8 FUN_00403630(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined auStack_5028 [4096];
  char local_4028 [4096];
  undefined local_3028 [4096];
  char local_2028 [4096];
  undefined local_1028 [4104];
  
  lVar6 = *param_1;
  uVar4 = FUN_004035c0(auStack_5028,local_4028,param_2);
  if ((int)uVar4 != -1) {
    lVar1 = lVar6 + 0x2078;
    FUN_00404310(local_1028,auStack_5028);
    iVar3 = FUN_004034d0(local_3028,"%s%c%s%c%s",lVar1,0x2f,local_1028,0x2f);
    if ((iVar3 == 0) ||
       (iVar3 = FUN_004034d0(local_3028,"%s%c%s%c%s%c%s",lVar1,0x2f,&DAT_00408404,0x2f,local_1028,
                             0x2f,local_4028), iVar3 == 0)) {
      iVar3 = FUN_00407020(lVar6);
      if ((iVar3 == -1) || (iVar3 = FUN_00407470(local_3028,lVar6 + 0x3078,local_4028), iVar3 == -1)
         ) {
        FUN_00403350("Failed to copy %s\n",local_4028);
        uVar4 = 0xffffffff;
      }
      else {
LAB_004036e9:
        uVar4 = 0;
      }
    }
    else {
      iVar3 = FUN_004034d0(local_2028,&DAT_00408407,lVar1,0x2f,auStack_5028);
      if (((iVar3 == 0) ||
          ((iVar3 = FUN_004034d0(local_2028,"%s%c%s.exe",lVar1,0x2f,auStack_5028), iVar3 == 0 ||
           (iVar3 = FUN_004034d0(local_2028,"%s%c%s",lVar1,0x2f,auStack_5028), iVar3 == 0)))) &&
         (iVar3 = FUN_00407020(*param_1), iVar3 != -1)) {
        lVar6 = param_1[1];
        if (lVar6 == 0) {
          plVar7 = param_1 + 1;
        }
        else {
          plVar2 = param_1 + 2;
          do {
            plVar7 = plVar2;
            iVar3 = strcmp((char *)(lVar6 + 0x78),local_2028);
            if (iVar3 == 0) goto LAB_004037ca;
            lVar6 = *plVar7;
            plVar2 = plVar7 + 1;
          } while (lVar6 != 0);
        }
        lVar6 = FUN_004030d0();
        if (lVar6 != 0) {
          snprintf((char *)(lVar6 + 0x78),0x1000,"%s",local_2028);
          iVar3 = snprintf((char *)(lVar6 + 0x2078),0x1000,"%s",*param_1 + 0x2078);
          if ((iVar3 < 0x1000) &&
             (iVar3 = snprintf((char *)(lVar6 + 0x3078),0x1000,"%s",*param_1 + 0x3078),
             iVar3 < 0x1000)) {
            *(undefined4 *)(lVar6 + 0x5078) = *(undefined4 *)(*param_1 + 0x5078);
            iVar3 = FUN_00402da0(lVar6);
            if (iVar3 == 0) {
              *plVar7 = lVar6;
LAB_004037ca:
              uVar5 = *(ulong *)(lVar6 + 0x10);
              if (uVar5 <= *(ulong *)(lVar6 + 0x18) && *(ulong *)(lVar6 + 0x18) != uVar5) {
                do {
                  iVar3 = strcmp((char *)(uVar5 + 0x12),local_4028);
                  if (iVar3 == 0) {
                    iVar3 = FUN_00402b50();
                    if (iVar3 != -1) goto LAB_004036e9;
                    break;
                  }
                  uVar5 = FUN_00402970(lVar6,uVar5);
                } while (uVar5 < *(ulong *)(lVar6 + 0x18));
              }
              FUN_00403350("Failed to extract %s\n",local_4028);
              return 0xffffffff;
            }
            FUN_00403350("Failed to open archive %s!\n",local_2028);
            FUN_00403110(lVar6);
          }
          else {
            FUN_00403350("Archive path exceeds PATH_MAX\n");
            FUN_00403110(lVar6);
          }
        }
      }
      FUN_00403350("Archive not found: %s\n",local_2028);
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



undefined8 FUN_004039c0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x18) <= uVar2) {
    return 0;
  }
  while ((uVar1 = *(byte *)(uVar2 + 0x11) - 0x5a, 0x1e < (byte)uVar1 ||
         ((0x40000501UL >> ((ulong)uVar1 & 0x3f) & 1) == 0))) {
    uVar2 = FUN_00402970(param_1);
    if (*(ulong *)(param_1 + 0x18) < uVar2 || *(ulong *)(param_1 + 0x18) == uVar2) {
      return 0;
    }
  }
  return 1;
}



int FUN_00403a20(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long local_c8;
  long local_c0 [20];
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  plVar5 = local_c0;
  for (lVar4 = 0x13; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar5 = 0;
    plVar5 = plVar5 + 1;
  }
  local_c8 = param_1;
  if (uVar3 < *(ulong *)(param_1 + 0x18)) {
    do {
      cVar1 = *(char *)(uVar3 + 0x11);
      if (((cVar1 + 0xa6U & 0xf7) == 0) || (cVar1 == 'x')) {
        if (param_2 != 0) {
          FUN_004067e0(param_2,uVar3);
        }
        iVar2 = FUN_00402b50(param_1,uVar3);
        if (iVar2 != 0) {
          iVar2 = -1;
          goto LAB_00403ae8;
        }
      }
      else if ((cVar1 == 'd') && (iVar2 = FUN_00403630(&local_c8,uVar3 + 0x12), iVar2 == -1))
      goto LAB_00403ae8;
      uVar3 = FUN_00402970(param_1,uVar3);
    } while (uVar3 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar3);
    iVar2 = 0;
LAB_00403ae8:
    plVar5 = local_c0;
    while (plVar5 = plVar5 + 1, local_c0[0] != 0) {
      FUN_00403110();
      local_c0[0] = *plVar5;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



undefined8 FUN_00403b20(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *__ptr;
  undefined8 uVar5;
  long lVar6;
  undefined local_1038 [4104];
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = (*DAT_0040d3a8)("__main__");
  if (lVar2 == 0) {
    FUN_00403350("Could not get __main__ module.\n");
    uVar5 = 0xffffffff;
  }
  else {
    lVar3 = (*DAT_0040d378)(lVar2);
    if (lVar3 == 0) {
      FUN_00403350("Could not get __main__ module\'s dict.\n");
      uVar5 = 0xffffffff;
    }
    else {
      if (uVar4 < *(ulong *)(param_1 + 0x18)) {
        do {
          if (*(char *)(uVar4 + 0x11) == 's') {
            __ptr = (void *)FUN_004029a0(param_1,uVar4);
            iVar1 = __snprintf_chk(local_1038,0x1000,1,0x1000,"%s%c%s.py",param_1 + 0x4078);
            if (0xfff < iVar1) {
              FUN_00403350("Absolute path to script exceeds PATH_MAX\n");
              return 0xffffffff;
            }
            uVar5 = (*DAT_0040d318)(local_1038);
            (*DAT_0040d360)(lVar2,"__file__",uVar5);
            (*DAT_0040d420)(uVar5);
            lVar6 = (*DAT_0040d2c8)(__ptr,*(undefined4 *)(uVar4 + 0xc));
            if (lVar6 == 0) {
              FUN_00403350("Failed to unmarshal code object for %s\n",uVar4 + 0x12);
              (*DAT_0040d3c8)();
              return 0xffffffff;
            }
            (*DAT_0040d360)(lVar2,"_pyi_main_co",lVar6);
            lVar6 = (*DAT_0040d2d0)(lVar6,lVar3,lVar3);
            if (lVar6 == 0) {
              (*DAT_0040d3c8)();
              FUN_00403350("Failed to execute script \'%s\' due to unhandled exception!\n",
                           uVar4 + 0x12);
              return 1;
            }
            free(__ptr);
          }
          uVar4 = FUN_00402970(param_1,uVar4);
        } while (uVar4 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar4);
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



void FUN_00403cf0(void)

{
  return;
}



undefined8 FUN_00403d00(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *__locale;
  char *pcVar3;
  
  iVar1 = FUN_00405310();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x507c) = 1;
    iVar1 = FUN_00405600(param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_00405910(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_00405ab0();
        if (iVar1 == 0) {
          if (*DAT_0040d470 != (char *)0x0) {
            uVar2 = FUN_00403b20(param_1);
            return uVar2;
          }
          setlocale(0,(char *)0x0);
          __locale = (char *)__strdup();
          setlocale(0,"");
          pcVar3 = nl_langinfo(0xe);
          setlocale(0,__locale);
          free(__locale);
          *DAT_0040d470 = pcVar3;
          uVar2 = FUN_00403b20(param_1);
          return uVar2;
        }
      }
    }
  }
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void thunk_FUN_00405b10(long param_1)

{
  if (*(int *)(param_1 + 0x507c) != 1) {
    return;
  }
  (*DAT_0040d348)("import sys; sys.stdout.flush();                 (sys.__stdout__.flush if sys.__stdout__                 is not sys.stdout else (lambda: None))()"
                  ,0);
  (*DAT_0040d348)("import sys; sys.stderr.flush();                 (sys.__stderr__.flush if sys.__stderr__                 is not sys.stderr else (lambda: None))()"
                  ,0);
                    // WARNING: Could not recover jumptable at 0x00405b42. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0040d418)();
  return;
}



void FUN_00403de0(void)

{
  return;
}



undefined4 FUN_00403df0(undefined4 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  char *__ptr;
  void *__ptr_00;
  FILE *__stream;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 local_3050;
  undefined8 local_3048 [2];
  char local_3038 [4096];
  char local_2038 [4096];
  undefined local_1038 [4104];
  
  local_3050 = 0;
  lVar3 = FUN_004030d0();
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_004045b0(local_3038,*param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_00404680(local_1038,local_3038);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = thunk_FUN_00404310(local_2038,local_3038);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  bVar7 = false;
  pcVar4 = (char *)FUN_00406f80("_MEIPASS2");
  if (pcVar4 != (char *)0x0) {
    bVar7 = true;
    __ptr = (char *)FUN_00406f80("_PYI_ONEDIR_MODE");
    if (__ptr != (char *)0x0) {
      bVar7 = true;
      if (*__ptr == '1') {
        bVar7 = __ptr[1] != '\0';
      }
      free(__ptr);
      unsetenv("_PYI_ONEDIR_MODE");
    }
  }
  unsetenv("_MEIPASS2");
  iVar1 = FUN_00402fd0(lVar3,local_3038);
  if (iVar1 == 0) {
    iVar1 = FUN_00402fd0(lVar3,local_1038,local_3038);
    if (iVar1 == 0) {
      FUN_00403350("Cannot open PyInstaller archive from executable (%s) or external archive (%s)\n"
                   ,local_3038,local_1038);
      return 0xffffffff;
    }
    if (pcVar4 != (char *)0x0) {
      __ptr_00 = (void *)FUN_00406f80("_PYI_PROCNAME");
      if (__ptr_00 == (void *)0x0) {
        unsetenv("_PYI_PROCNAME");
        *(undefined4 *)(lVar3 + 0x5080) = param_1;
        *(undefined8 **)(lVar3 + 0x5088) = param_2;
        goto LAB_00403f57;
      }
LAB_00403f13:
      iVar1 = prctl(0xf,__ptr_00,0,0);
      if (iVar1 != 0) {
        FUN_00403350("LOADER: failed to set linux process name!\n");
        return 0xffffffff;
      }
      free(__ptr_00);
      goto LAB_00403f36;
    }
    __stream = fopen(local_3038,"rb");
    uVar6 = 0xffffffff;
    if (__stream == (FILE *)0x0) {
LAB_00404285:
      FUN_00403350("Cannot side-load external archive %s (code %d)!\n",local_1038,uVar6);
      return 0xffffffff;
    }
    local_3048[0] = 0xe0b0a0b0d49454d;
    lVar5 = FUN_00407ac0(__stream,local_3048,8);
    if (lVar5 == 0) {
      fclose(__stream);
      uVar6 = 1;
      goto LAB_00404285;
    }
    __ptr_00 = (void *)FUN_00406f80("_PYI_PROCNAME");
    if (__ptr_00 != (void *)0x0) goto LAB_00403f13;
    unsetenv("_PYI_PROCNAME");
    *(undefined4 *)(lVar3 + 0x5080) = param_1;
    *(undefined8 **)(lVar3 + 0x5088) = param_2;
  }
  else {
    __ptr_00 = (void *)FUN_00406f80("_PYI_PROCNAME");
    if (__ptr_00 != (void *)0x0) goto LAB_00403f13;
LAB_00403f36:
    unsetenv("_PYI_PROCNAME");
    *(undefined4 *)(lVar3 + 0x5080) = param_1;
    *(undefined8 **)(lVar3 + 0x5088) = param_2;
    if (pcVar4 != (char *)0x0) goto LAB_00403f57;
  }
  iVar1 = FUN_004039c0(lVar3);
  if (iVar1 == 0) {
    FUN_00406fb0("_MEIPASS2",local_2038);
    FUN_00406fb0("_PYI_ONEDIR_MODE",&DAT_004085b4);
    iVar1 = FUN_004075b0(lVar3);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    iVar1 = FUN_00407750(local_3038,param_1,param_2);
    if (iVar1 == -1) {
      return 0xffffffff;
    }
  }
LAB_00403f57:
  local_3050 = FUN_00406250();
  if ((bVar7) || (iVar1 = FUN_00405d80(local_3050,lVar3,0), iVar1 != 0)) {
    FUN_00406290(&local_3050);
  }
  else {
    iVar1 = FUN_00405fb0(lVar3,local_3050);
    if ((iVar1 == 0) && (iVar1 = FUN_004061f0(local_3050), iVar1 == 0)) {
      FUN_004064e0(local_3050,local_3038);
    }
    else {
      FUN_004063d0(local_3050);
      FUN_00406290(&local_3050);
    }
  }
  if (pcVar4 != (char *)0x0) {
    iVar1 = strcmp(local_2038,pcVar4);
    if (iVar1 != 0) {
      iVar1 = snprintf((char *)(lVar3 + 0x3078),0x1000,"%s",pcVar4);
      if (0xfff < iVar1) {
        return 0xffffffff;
      }
      *(undefined4 *)(lVar3 + 0x5078) = 1;
      __strcpy_chk(lVar3 + 0x4078,(char *)(lVar3 + 0x3078),0x1000);
    }
    FUN_00403cf0(lVar3);
    uVar2 = FUN_00403d00(lVar3);
    thunk_FUN_00405b10(lVar3);
    FUN_004063d0(local_3050);
    FUN_00406290(&local_3050);
    return uVar2;
  }
  iVar1 = FUN_00403a20(lVar3,local_3050);
  if (iVar1 == 0) {
    pcVar4 = local_2038;
    if (*(char *)(lVar3 + 0x3078) != '\0') {
      pcVar4 = (char *)(lVar3 + 0x3078);
    }
    FUN_00406fb0("_MEIPASS2",pcVar4);
    iVar1 = prctl(0x10,local_3048,0,0);
    if (iVar1 == 0) {
      FUN_00406fb0("_PYI_PROCNAME",local_3048);
    }
    iVar1 = FUN_004075b0(lVar3);
    if (iVar1 != -1) {
      FUN_00403de0();
      uVar2 = FUN_00407780(local_3038,lVar3,param_1,param_2);
      FUN_004063d0(local_3050);
      FUN_00406290(&local_3050);
      if (*(int *)(lVar3 + 0x5078) == 1) {
        FUN_00407130(lVar3 + 0x3078);
      }
      FUN_00403110(lVar3);
      FUN_00407660();
      return uVar2;
    }
  }
  return 0xffffffff;
}



bool FUN_00404310(char *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char acStack_1008 [4096];
  
  iVar2 = snprintf(acStack_1008,0x1000,"%s",param_2);
  bVar1 = false;
  if (iVar2 < 0x1000) {
    pcVar3 = dirname(acStack_1008);
    iVar2 = snprintf(param_1,0x1000,"%s",pcVar3);
    bVar1 = iVar2 < 0x1000;
  }
  return bVar1;
}



undefined8 FUN_00404380(char *param_1,char *param_2)

{
  char *__src;
  
  __src = __xpg_basename(param_2);
  strcpy(param_1,__src);
  return 1;
}



char * FUN_004043a0(char *param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  size_t sVar4;
  char *pcVar5;
  
  iVar2 = snprintf(param_1,0x1000,"%s",param_2);
  uVar3 = (ulong)iVar2;
  if (uVar3 < 0xfff) {
    if (param_1[uVar3 - 1] != '/') {
      lVar1 = uVar3 + 1;
      param_1[uVar3] = '/';
      uVar3 = uVar3 + 2;
      param_1[lVar1] = '\0';
    }
    uVar3 = 0x1000 - uVar3;
    sVar4 = strlen(param_3);
    if (sVar4 < uVar3) {
      if (param_3[sVar4 - 1] != '/') {
        pcVar5 = strncat(param_1,param_3,uVar3);
        return pcVar5;
      }
      strncat(param_1,param_3,uVar3);
      sVar4 = strlen(param_1);
      param_1[sVar4 - 1] = '\0';
      return param_1;
    }
  }
  return (char *)0x0;
}



bool FUN_00404440(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  bool bVar3;
  undefined auStack_3018 [4096];
  undefined local_2018 [4096];
  undefined local_1018 [4104];
  
  pcVar1 = __xpg_basename(param_2);
  __strcpy_chk(local_1018,pcVar1,0x1000);
  FUN_00404310(auStack_3018,param_2);
  lVar2 = __realpath_chk(auStack_3018,local_2018,0x1000);
  bVar3 = false;
  if (lVar2 != 0) {
    lVar2 = FUN_004043a0(param_1,local_2018,local_1018);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}



bool FUN_004044d0(char *param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  
  pcVar1 = realpath(param_3,param_1);
  return pcVar1 != (char *)0x0;
}



bool FUN_004044f0(char *param_1)

{
  int iVar1;
  stat sStack_98;
  
  iVar1 = __xstat(1,param_1,&sStack_98);
  return iVar1 == 0;
}



undefined8 FUN_00404520(char *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  long lVar3;
  stat sStack_a8;
  
  pcVar2 = (char *)FUN_00406f80("PATH");
  if (pcVar2 != (char *)0x0) {
    pcVar2 = strtok(pcVar2,":");
    while (pcVar2 != (char *)0x0) {
      lVar3 = FUN_004043a0(param_1,pcVar2,param_2);
      if ((lVar3 != 0) && (iVar1 = __xstat(1,param_1,&sStack_a8), iVar1 == 0)) {
        return 1;
      }
      pcVar2 = strtok((char *)0x0,":");
    }
  }
  return 0;
}



bool FUN_004045b0(char *param_1,char *param_2)

{
  int iVar1;
  ssize_t sVar2;
  char *pcVar3;
  char acStack_1018 [4104];
  
  sVar2 = readlink("/proc/self/exe",param_1,0xfff);
  if (sVar2 != -1) {
    param_1[sVar2] = '\0';
    return true;
  }
  pcVar3 = strchr(param_2,0x2f);
  if (pcVar3 == (char *)0x0) {
    iVar1 = FUN_00404520(acStack_1018,param_2);
    if (((iVar1 != 0) || (iVar1 = snprintf(acStack_1018,0x1000,"%s",param_2), iVar1 < 0x1000)) &&
       (iVar1 = FUN_00404440(param_1,acStack_1018), iVar1 != 0)) {
      return true;
    }
    return false;
  }
  iVar1 = FUN_00404440(param_1);
  return iVar1 != 0;
}



bool thunk_FUN_00404310(char *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char acStack_1008 [4096];
  
  iVar2 = snprintf(acStack_1008,0x1000,"%s",param_2);
  bVar1 = false;
  if (iVar2 < 0x1000) {
    pcVar3 = dirname(acStack_1008);
    iVar2 = snprintf(param_1,0x1000,"%s",pcVar3);
    bVar1 = iVar2 < 0x1000;
  }
  return bVar1;
}



bool FUN_00404680(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = __snprintf_chk(param_1,0x1000,1,0xffffffffffffffff,"%s.pkg",param_2);
  return iVar1 < 0x1000;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_004046c0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  DAT_0040d478 = dlsym(param_1,"Py_DontWriteBytecodeFlag");
  if (DAT_0040d478 == 0) {
    FUN_00403350("Cannot dlsym for Py_DontWriteBytecodeFlag\n");
    uVar1 = 0xffffffff;
  }
  else {
    DAT_0040d470 = dlsym(param_1,"Py_FileSystemDefaultEncoding");
    if (DAT_0040d470 == 0) {
      FUN_00403350("Cannot dlsym for Py_FileSystemDefaultEncoding\n");
      uVar1 = 0xffffffff;
    }
    else {
      DAT_0040d468 = dlsym(param_1,"Py_FrozenFlag");
      if (DAT_0040d468 == 0) {
        FUN_00403350("Cannot dlsym for Py_FrozenFlag\n");
        uVar1 = 0xffffffff;
      }
      else {
        DAT_0040d460 = dlsym(param_1,"Py_IgnoreEnvironmentFlag");
        if (DAT_0040d460 == 0) {
          FUN_00403350("Cannot dlsym for Py_IgnoreEnvironmentFlag\n");
          uVar1 = 0xffffffff;
        }
        else {
          DAT_0040d458 = dlsym(param_1,"Py_NoSiteFlag");
          if (DAT_0040d458 == 0) {
            FUN_00403350("Cannot dlsym for Py_NoSiteFlag\n");
            uVar1 = 0xffffffff;
          }
          else {
            DAT_0040d450 = dlsym(param_1,"Py_NoUserSiteDirectory");
            if (DAT_0040d450 == 0) {
              FUN_00403350("Cannot dlsym for Py_NoUserSiteDirectory\n");
              uVar1 = 0xffffffff;
            }
            else {
              DAT_0040d448 = dlsym(param_1,"Py_OptimizeFlag");
              if (DAT_0040d448 == 0) {
                FUN_00403350("Cannot dlsym for Py_OptimizeFlag\n");
                uVar1 = 0xffffffff;
              }
              else {
                DAT_0040d440 = dlsym(param_1,"Py_VerboseFlag");
                if (DAT_0040d440 == 0) {
                  FUN_00403350("Cannot dlsym for Py_VerboseFlag\n");
                  uVar1 = 0xffffffff;
                }
                else {
                  DAT_0040d438 = dlsym(param_1,"Py_UnbufferedStdioFlag");
                  if (DAT_0040d438 == 0) {
                    FUN_00403350("Cannot dlsym for Py_UnbufferedStdioFlag\n");
                    uVar1 = 0xffffffff;
                  }
                  else {
                    if ((0x132 < param_2) &&
                       (DAT_0040d430 = dlsym(param_1,"Py_UTF8Mode"), DAT_0040d430 == 0)) {
                      FUN_00403350("Cannot dlsym for Py_UTF8Mode\n");
                      return 0xffffffff;
                    }
                    _DAT_0040d428 = dlsym(param_1,"Py_BuildValue");
                    if (_DAT_0040d428 == 0) {
                      FUN_00403350("Cannot dlsym for Py_BuildValue\n");
                      uVar1 = 0xffffffff;
                    }
                    else {
                      DAT_0040d420 = dlsym(param_1,"Py_DecRef");
                      if (DAT_0040d420 == 0) {
                        FUN_00403350("Cannot dlsym for Py_DecRef\n");
                        uVar1 = 0xffffffff;
                      }
                      else {
                        _DAT_0040d418 = dlsym(param_1,"Py_Finalize");
                        if (_DAT_0040d418 == 0) {
                          FUN_00403350("Cannot dlsym for Py_Finalize\n");
                          uVar1 = 0xffffffff;
                        }
                        else {
                          _DAT_0040d410 = dlsym(param_1,"Py_IncRef");
                          if (_DAT_0040d410 == 0) {
                            FUN_00403350("Cannot dlsym for Py_IncRef\n");
                            uVar1 = 0xffffffff;
                          }
                          else {
                            DAT_0040d408 = dlsym(param_1,"Py_Initialize");
                            if (DAT_0040d408 == 0) {
                              FUN_00403350("Cannot dlsym for Py_Initialize\n");
                              uVar1 = 0xffffffff;
                            }
                            else {
                              DAT_0040d400 = dlsym(param_1,"Py_SetPath");
                              if (DAT_0040d400 == 0) {
                                FUN_00403350("Cannot dlsym for Py_SetPath\n");
                                uVar1 = 0xffffffff;
                              }
                              else {
                                _DAT_0040d3f8 = dlsym(param_1,"Py_GetPath");
                                if (_DAT_0040d3f8 == 0) {
                                  FUN_00403350("Cannot dlsym for Py_GetPath\n");
                                  uVar1 = 0xffffffff;
                                }
                                else {
                                  DAT_0040d3f0 = dlsym(param_1,"Py_SetProgramName");
                                  if (DAT_0040d3f0 == 0) {
                                    FUN_00403350("Cannot dlsym for Py_SetProgramName\n");
                                    uVar1 = 0xffffffff;
                                  }
                                  else {
                                    DAT_0040d3e8 = dlsym(param_1,"Py_SetPythonHome");
                                    if (DAT_0040d3e8 == 0) {
                                      FUN_00403350("Cannot dlsym for Py_SetPythonHome\n");
                                      uVar1 = 0xffffffff;
                                    }
                                    else {
                                      _DAT_0040d3e0 = dlsym(param_1,"PyDict_GetItemString");
                                      if (_DAT_0040d3e0 == 0) {
                                        FUN_00403350("Cannot dlsym for PyDict_GetItemString\n");
                                        uVar1 = 0xffffffff;
                                      }
                                      else {
                                        DAT_0040d3d8 = dlsym(param_1,"PyErr_Clear");
                                        if (DAT_0040d3d8 == 0) {
                                          FUN_00403350("Cannot dlsym for PyErr_Clear\n");
                                          uVar1 = 0xffffffff;
                                        }
                                        else {
                                          DAT_0040d3d0 = dlsym(param_1,"PyErr_Occurred");
                                          if (DAT_0040d3d0 == 0) {
                                            FUN_00403350("Cannot dlsym for PyErr_Occurred\n");
                                            uVar1 = 0xffffffff;
                                          }
                                          else {
                                            DAT_0040d3c8 = dlsym(param_1,"PyErr_Print");
                                            if (DAT_0040d3c8 == 0) {
                                              FUN_00403350("Cannot dlsym for PyErr_Print\n");
                                              uVar1 = 0xffffffff;
                                            }
                                            else {
                                              _DAT_0040d3c0 = dlsym(param_1,"PyErr_Fetch");
                                              if (_DAT_0040d3c0 == 0) {
                                                FUN_00403350("Cannot dlsym for PyErr_Fetch\n");
                                                uVar1 = 0xffffffff;
                                              }
                                              else {
                                                _DAT_0040d3b8 = dlsym(param_1,"PyErr_Restore");
                                                if (_DAT_0040d3b8 == 0) {
                                                  FUN_00403350("Cannot dlsym for PyErr_Restore\n");
                                                  uVar1 = 0xffffffff;
                                                }
                                                else {
                                                  _DAT_0040d3b0 =
                                                       dlsym(param_1,"PyErr_NormalizeException");
                                                  if (_DAT_0040d3b0 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyErr_NormalizeException\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d3a8 = dlsym(param_1,
                                                  "PyImport_AddModule");
                                                  if (DAT_0040d3a8 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyImport_AddModule\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d3a0 = dlsym(param_1,
                                                  "PyImport_ExecCodeModule");
                                                  if (DAT_0040d3a0 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyImport_ExecCodeModule\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d398 =
                                                         dlsym(param_1,"PyImport_ImportModule");
                                                    if (_DAT_0040d398 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyImport_ImportModule\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d390 = dlsym(param_1,"PyList_Append");
                                                    if (DAT_0040d390 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyList_Append\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d388 = dlsym(param_1,"PyList_New");
                                                    if (_DAT_0040d388 == 0) {
                                                      FUN_00403350("Cannot dlsym for PyList_New\n");
                                                      uVar1 = 0xffffffff;
                                                    }
                                                    else {
                                                      _DAT_0040d380 = dlsym(param_1,"PyLong_AsLong")
                                                      ;
                                                      if (_DAT_0040d380 == 0) {
                                                        FUN_00403350(
                                                  "Cannot dlsym for PyLong_AsLong\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d378 = dlsym(param_1,"PyModule_GetDict")
                                                    ;
                                                    if (DAT_0040d378 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyModule_GetDict\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d370 =
                                                         dlsym(param_1,"PyObject_CallFunction");
                                                    if (_DAT_0040d370 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyObject_CallFunction\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d368 =
                                                         dlsym(param_1,
                                                  "PyObject_CallFunctionObjArgs");
                                                  if (_DAT_0040d368 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyObject_CallFunctionObjArgs\n")
                                                  ;
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d360 = dlsym(param_1,
                                                  "PyObject_SetAttrString");
                                                  if (DAT_0040d360 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyObject_SetAttrString\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d358 =
                                                         dlsym(param_1,"PyObject_GetAttrString");
                                                    if (_DAT_0040d358 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyObject_GetAttrString\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d350 = dlsym(param_1,"PyObject_Str");
                                                    if (_DAT_0040d350 == 0) {
                                                      FUN_00403350("Cannot dlsym for PyObject_Str\n"
                                                                  );
                                                      uVar1 = 0xffffffff;
                                                    }
                                                    else {
                                                      DAT_0040d348 = dlsym(param_1,
                                                  "PyRun_SimpleStringFlags");
                                                  if (DAT_0040d348 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyRun_SimpleStringFlags\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d340 = dlsym(param_1,
                                                  "PySys_AddWarnOption");
                                                  if (DAT_0040d340 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PySys_AddWarnOption\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d338 = dlsym(param_1,"PySys_SetArgvEx");
                                                    if (DAT_0040d338 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PySys_SetArgvEx\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d330 = dlsym(param_1,"PySys_GetObject");
                                                    if (DAT_0040d330 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PySys_GetObject\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d328 = dlsym(param_1,"PySys_SetObject");
                                                    if (DAT_0040d328 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PySys_SetObject\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d320 = dlsym(param_1,"PySys_SetPath");
                                                    if (DAT_0040d320 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PySys_SetPath\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d2d0 = dlsym(param_1,"PyEval_EvalCode");
                                                    if (DAT_0040d2d0 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyEval_EvalCode\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d2c8 = dlsym(param_1,
                                                  "PyMarshal_ReadObjectFromString");
                                                  if (DAT_0040d2c8 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyMarshal_ReadObjectFromString\n"
                                                  );
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d318 = dlsym(param_1,
                                                  "PyUnicode_FromString");
                                                  if (DAT_0040d318 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyUnicode_FromString\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d310 = dlsym(param_1,"Py_DecodeLocale");
                                                    if (DAT_0040d310 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for Py_DecodeLocale\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d308 = dlsym(param_1,"PyMem_RawFree");
                                                    if (DAT_0040d308 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyMem_RawFree\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d300 = dlsym(param_1,
                                                  "PyUnicode_FromFormat");
                                                  if (DAT_0040d300 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyUnicode_FromFormat\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d2f0 =
                                                         dlsym(param_1,"PyUnicode_Decode");
                                                    if (_DAT_0040d2f0 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyUnicode_Decode\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_0040d2f8 = dlsym(param_1,
                                                  "PyUnicode_DecodeFSDefault");
                                                  if (DAT_0040d2f8 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for PyUnicode_DecodeFSDefault\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d2e8 =
                                                         dlsym(param_1,"PyUnicode_AsUTF8");
                                                    if (_DAT_0040d2e8 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyUnicode_AsUTF8\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d2e0 = dlsym(param_1,"PyUnicode_Join");
                                                    if (_DAT_0040d2e0 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyUnicode_Join\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    _DAT_0040d2d8 =
                                                         dlsym(param_1,"PyUnicode_Replace");
                                                    if (_DAT_0040d2d8 == 0) {
                                                      FUN_00403350(
                                                  "Cannot dlsym for PyUnicode_Replace\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    uVar1 = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}



void FUN_00405160(long param_1)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  wchar_t awStack_4038 [4102];
  
  bVar10 = 0;
  uVar4 = *(ulong *)(param_1 + 0x10);
  *DAT_0040d458 = 1;
  *DAT_0040d468 = 1;
  *DAT_0040d478 = 1;
  *DAT_0040d450 = 1;
  *DAT_0040d460 = 1;
  *DAT_0040d440 = 0;
  if (uVar4 < *(ulong *)(param_1 + 0x18)) {
    bVar2 = false;
    do {
      bVar8 = *(byte *)(uVar4 + 0x11) < 0x6f;
      bVar9 = *(byte *)(uVar4 + 0x11) == 0x6f;
      if (bVar9) {
        lVar5 = 4;
        pbVar6 = (byte *)(uVar4 + 0x12);
        pbVar7 = &DAT_00409294;
        do {
          if (lVar5 == 0) break;
          lVar5 = lVar5 + -1;
          bVar8 = *pbVar6 < *pbVar7;
          bVar9 = *pbVar6 == *pbVar7;
          pbVar6 = pbVar6 + (ulong)bVar10 * -2 + 1;
          pbVar7 = pbVar7 + (ulong)bVar10 * -2 + 1;
        } while (bVar9);
        if ((!bVar8 && !bVar9) != bVar8) {
          cVar1 = *(char *)(uVar4 + 0x12);
          if (cVar1 == 'u') {
            bVar2 = true;
          }
          else if (cVar1 < 'v') {
            if (cVar1 == 'O') {
              *DAT_0040d448 = 1;
            }
            else if (cVar1 == 'W') {
              sVar3 = mbstowcs(awStack_4038,(char *)(uVar4 + 0x14),0x1000);
              if (sVar3 == 0xffffffffffffffff) {
                FUN_00403350("Failed to convert Wflag %s using mbstowcs (invalid multibyte string)\n"
                             ,(char *)(uVar4 + 0x14));
                return;
              }
              (*DAT_0040d340)(awStack_4038);
            }
          }
          else if (cVar1 == 'v') {
            *DAT_0040d440 = 1;
          }
        }
      }
      uVar4 = FUN_00402970(param_1);
    } while (uVar4 < *(ulong *)(param_1 + 0x18));
    if (bVar2) {
      fflush(stdout);
      fflush(stderr);
      setbuf(stdin,(char *)0x0);
      setbuf(stdout,(char *)0x0);
      setbuf(stderr,(char *)0x0);
      *DAT_0040d438 = 1;
      return;
    }
  }
  return;
}



undefined8 FUN_00405310(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char acStack_1058 [64];
  undefined local_1018 [4104];
  
  iVar1 = snprintf(acStack_1058,0x40,"%s",param_1 + 0x38);
  if ((ulong)(long)iVar1 < 0x40) {
    lVar2 = FUN_004043a0(local_1018,param_1 + 0x4078,acStack_1058);
    if (lVar2 == 0) {
      FUN_00403350("Path of DLL (%s) length exceeds buffer[%d] space\n",param_1 + 0x4078,0x1000);
    }
    lVar2 = FUN_00407590(local_1018);
    if (lVar2 == 0) {
      uVar3 = dlerror(0);
      FUN_00403350("Error loading Python lib \'%s\': dlopen: %s\n",local_1018,uVar3);
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = FUN_004046c0(lVar2,DAT_0040d2bc);
    }
  }
  else {
    FUN_00403350("Reported length (%d) of DLL name (%s) length exceeds buffer[%d] space\n",
                 (long)iVar1,param_1 + 0x38,0x40);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



undefined8 FUN_004053e0(void)

{
  return 0;
}



void FUN_004053f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *param_1;
  plVar3 = param_1;
  while (lVar2 != 0) {
    (*DAT_0040d308)();
    plVar1 = plVar3 + 1;
    plVar3 = plVar3 + 1;
    lVar2 = *plVar1;
  }
  free(param_1);
  return;
}



long * FUN_00405430(int param_1,long param_2)

{
  long *plVar1;
  char *pcVar2;
  long *__ptr;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  
  pcVar2 = setlocale(0,(char *)0x0);
  pcVar2 = (char *)__strdup(pcVar2);
  if (pcVar2 != (char *)0x0) {
    uVar4 = param_1 + 1;
    __ptr = (long *)calloc((long)(int)uVar4 * 8,1);
    if (__ptr != (long *)0x0) {
      uVar6 = 1;
      setlocale(0,"");
      if (0 < param_1) {
        do {
          lVar3 = (*DAT_0040d310)(*(undefined8 *)(param_2 + -8 + uVar6 * 8),0);
          __ptr[uVar6 - 1] = lVar3;
          if (lVar3 == 0) {
            lVar3 = *__ptr;
            plVar5 = __ptr;
            while (lVar3 != 0) {
              (*DAT_0040d308)();
              plVar1 = plVar5 + 1;
              plVar5 = plVar5 + 1;
              lVar3 = *plVar1;
            }
            free(__ptr);
            free(pcVar2);
            FUN_00403350("Fatal error: unable to decode the command line argument #%i\n",
                         uVar6 & 0xffffffff);
            return (long *)0x0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar4 != uVar6);
      }
      __ptr[(long)(int)uVar4 + -1] = 0;
      setlocale(0,pcVar2);
      free(pcVar2);
      return __ptr;
    }
  }
  FUN_00403350("out of memory\n");
  return (long *)0x0;
}



wchar_t * FUN_00405570(wchar_t *param_1,undefined8 param_2,size_t param_3)

{
  wchar_t *__src;
  size_t local_20 [2];
  
  local_20[0] = param_3;
  setlocale(0,(char *)0x0);
  DAT_0040d2c0 = (char *)__strdup();
  setlocale(0,"");
  __src = (wchar_t *)(*DAT_0040d310)(param_2,local_20);
  setlocale(0,DAT_0040d2c0);
  if (__src != (wchar_t *)0x0) {
    wcsncpy(param_1,__src,local_20[0]);
    (*DAT_0040d308)(__src);
    __src = param_1;
  }
  return __src;
}



long FUN_00405600(long param_1)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long *__ptr;
  byte *pbVar6;
  long *plVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  
  bVar11 = 0;
  pcVar3 = (char *)FUN_00406f80();
  if (pcVar3 == (char *)0x0) {
    pcVar3 = setlocale(0,(char *)0x0);
    if (pcVar3 == (char *)0x0) {
      pbVar6 = (byte *)setlocale(0,"");
      if (pbVar6 == (byte *)0x0) goto LAB_00405640;
LAB_0040580b:
      bVar9 = *pbVar6 < 0x43;
      bVar10 = *pbVar6 == 0x43;
      if (bVar10) {
        bVar9 = false;
        bVar10 = pbVar6[1] == 0;
        if (!bVar10) goto LAB_00405845;
      }
      else {
LAB_00405845:
        lVar4 = 6;
        pbVar8 = (byte *)"POSIX";
        do {
          if (lVar4 == 0) break;
          lVar4 = lVar4 + -1;
          bVar9 = *pbVar6 < *pbVar8;
          bVar10 = *pbVar6 == *pbVar8;
          pbVar6 = pbVar6 + (ulong)bVar11 * -2 + 1;
          pbVar8 = pbVar8 + (ulong)bVar11 * -2 + 1;
        } while (bVar10);
        if ((!bVar9 && !bVar10) != bVar9) goto LAB_0040585d;
      }
      if (pcVar3 != (char *)0x0) {
        setlocale(0,pcVar3);
        free(pcVar3);
      }
LAB_004057ca:
      *DAT_0040d430 = 1;
      goto LAB_0040564d;
    }
    pcVar3 = (char *)__strdup();
    pbVar6 = (byte *)setlocale(0,"");
    if (pbVar6 != (byte *)0x0) goto LAB_0040580b;
LAB_0040585d:
    if (pcVar3 != (char *)0x0) {
      setlocale(0,pcVar3);
      free(pcVar3);
    }
  }
  else if (*pcVar3 == '0') {
    if (pcVar3[1] != '\0') goto LAB_00405634;
  }
  else {
    if ((*pcVar3 == '1') && (pcVar3[1] == '\0')) goto LAB_004057ca;
LAB_00405634:
    FUN_00403350("Invalid value for PYTHONUTF8=%s; disabling utf-8 mode!\n");
  }
LAB_00405640:
  *DAT_0040d430 = 0;
LAB_0040564d:
  lVar4 = FUN_00405570(&DAT_00420540,param_1 + 0x1078,0x1000);
  if (lVar4 == 0) {
    FUN_00403350("Failed to convert progname to wchar_t\n");
    lVar4 = 0xffffffff;
  }
  else {
    lVar4 = param_1 + 0x4078;
    (*DAT_0040d3f0)(&DAT_00420540);
    lVar5 = FUN_00405570(&DAT_0041c520,lVar4,0x1000);
    if (lVar5 == 0) {
      FUN_00403350("Failed to convert pyhome to wchar_t\n");
      lVar4 = 0xffffffff;
    }
    else {
      (*DAT_0040d3e8)(&DAT_0041c520);
      iVar2 = __snprintf_chk(&DAT_00419500,0x3020,1,0x3020,"%s%c%s%c%s%c%s%c%s",lVar4,0x2f,
                             "base_library.zip",0x3a,lVar4,0x2f,"lib-dynload",0x3a,lVar4);
      if (iVar2 < 0x3020) {
        lVar4 = FUN_00405570(&DAT_0040d480,&DAT_00419500,0x3020);
        if (lVar4 == 0) {
          FUN_00403350("Failed to convert pypath to wchar_t\n");
          lVar4 = 0xffffffff;
        }
        else {
          (*DAT_0040d400)(&DAT_0040d480);
          FUN_00405160(param_1);
          (*DAT_0040d408)();
          (*DAT_0040d320)(&DAT_0040d480);
          __ptr = (long *)FUN_00405430(*(undefined4 *)(param_1 + 0x5080),
                                       *(undefined8 *)(param_1 + 0x5088));
          if (__ptr == (long *)0x0) {
            FUN_00403350("Failed to convert argv to wchar_t\n");
            lVar4 = 0xffffffff;
          }
          else {
            (*DAT_0040d338)(*(undefined4 *)(param_1 + 0x5080),__ptr,0);
            lVar4 = *__ptr;
            plVar7 = __ptr;
            while (lVar4 != 0) {
              (*DAT_0040d308)();
              plVar1 = plVar7 + 1;
              plVar7 = plVar7 + 1;
              lVar4 = *plVar1;
            }
            free(__ptr);
            lVar4 = (*DAT_0040d3d0)();
            if (lVar4 != 0) {
              FUN_00403350("Error detected starting Python VM.\n");
              lVar4 = 0xffffffff;
            }
          }
        }
      }
      else {
        FUN_00403350("sys.path (based on %s) exceeds buffer[%d] space\n",lVar4,0x3020);
        lVar4 = 0xffffffff;
      }
    }
  }
  return lVar4;
}



undefined8 FUN_00405910(long param_1)

{
  long lVar1;
  ulong uVar2;
  void *__ptr;
  undefined8 uVar3;
  
  lVar1 = (*DAT_0040d2f8)(param_1 + 0x4078);
  if (lVar1 == 0) {
    FUN_00403350("Failed to get _MEIPASS as PyObject.\n");
    uVar3 = 0xffffffff;
  }
  else {
    (*DAT_0040d328)("_MEIPASS",lVar1);
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (uVar2 < *(ulong *)(param_1 + 0x18)) {
      do {
        if ((*(byte *)(uVar2 + 0x11) & 0xdf) == 0x4d) {
          __ptr = (void *)FUN_004029a0(param_1,uVar2);
          lVar1 = (*DAT_0040d2c8)(__ptr,*(undefined4 *)(uVar2 + 0xc));
          if ((lVar1 == 0) || (lVar1 = (*DAT_0040d3a0)(uVar2 + 0x12,lVar1), lVar1 == 0)) {
            FUN_00403350("Module object for %s is NULL!\n",uVar2 + 0x12);
          }
          lVar1 = (*DAT_0040d3d0)();
          if (lVar1 != 0) {
            (*DAT_0040d3c8)();
            (*DAT_0040d3d8)();
          }
          free(__ptr);
        }
        uVar2 = FUN_00402970(param_1,uVar2);
      } while (uVar2 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar2);
    }
    uVar3 = 0;
  }
  return uVar3;
}



int FUN_00405a00(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_2 + 4);
  lVar5 = *(long *)(param_1 + 8);
  uVar3 = (*DAT_0040d2f8)();
  uVar4 = (*DAT_0040d300)("%U?%llu",uVar3,(ulong)uVar1 + lVar5);
  (*DAT_0040d420)(uVar3);
  lVar5 = (*DAT_0040d330)(&DAT_004092fa);
  if (lVar5 == 0) {
    FUN_00403350("Installing PYZ: Could not get sys.path\n");
    iVar2 = -1;
    (*DAT_0040d420)(uVar4);
  }
  else {
    iVar2 = (*DAT_0040d390)(lVar5,uVar4);
    if (iVar2 != 0) {
      FUN_00403350("Failed to append to sys.path\n");
      return iVar2;
    }
  }
  return iVar2;
}



undefined8 FUN_00405ab0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x18) <= uVar1) {
    return 0;
  }
  do {
    if (*(char *)(uVar1 + 0x11) == 'z') {
      FUN_00405a00(param_1);
    }
    uVar1 = FUN_00402970(param_1,uVar1);
  } while (uVar1 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar1);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00405b10(long param_1)

{
  if (*(int *)(param_1 + 0x507c) != 1) {
    return;
  }
  (*DAT_0040d348)("import sys; sys.stdout.flush();                 (sys.__stdout__.flush if sys.__stdout__                 is not sys.stdout else (lambda: None))()"
                  ,0);
  (*DAT_0040d348)("import sys; sys.stderr.flush();                 (sys.__stderr__.flush if sys.__stderr__                 is not sys.stderr else (lambda: None))()"
                  ,0);
                    // WARNING: Could not recover jumptable at 0x00405b42. Too many branches
                    // WARNING: Treating indirect jump as call
  (*_DAT_0040d418)();
  return;
}



undefined8 FUN_00405b50(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(code **)(param_1 + 0x30) != (code *)0x0) {
    uVar2 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    (*DAT_00424628)(&DAT_00424570);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    **(undefined4 **)(param_1 + 0x28) = uVar2;
    (*DAT_00424610)(uVar1);
    (*DAT_00424620)(&DAT_00424570);
  }
  return 1;
}



undefined8 FUN_00405bb0(undefined8 *param_1,long param_2)

{
  (*DAT_004245e8)(*param_1,"status_text",0,param_2 + 0x12,1);
  return 0;
}



undefined8 FUN_00405be0(void)

{
  return 0;
}



undefined8 FUN_00405bf0(void)

{
  DAT_00424548 = 1;
  return 0;
}



ulong FUN_00405c00(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_3;
  uVar2 = (*DAT_004245d8)(*(undefined8 *)(param_4 + -8 + uVar5 * 8));
  uVar3 = FUN_004044f0(uVar2);
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  puVar4 = (undefined8 *)(*DAT_00424598)(param_3 * 8);
  uVar2 = (*DAT_004245d0)("_source",0xffffffff);
  *puVar4 = uVar2;
  if (1 < param_3) {
    uVar3 = 1;
    do {
      puVar4[uVar3] = *(undefined8 *)(param_4 + uVar3 * 8);
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  uVar1 = (*DAT_004245a0)(param_2,uVar5 & 0xffffffff,puVar4,0);
  (*DAT_00424590)(puVar4);
  return (ulong)uVar1;
}



void FUN_00405cc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined auStack_1018 [4104];
  
  uVar1 = (*DAT_004245d8)(*(undefined8 *)(param_3 + 0x20));
  FUN_004043a0(auStack_1018,param_1 + 0x2010,uVar1);
  (*DAT_004245e8)(param_2,"tk_library",0,param_1 + 0x2010,1);
  (*DAT_004245b0)(param_2,auStack_1018);
  return;
}



undefined8 FUN_00405d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  undefined in_CF;
  undefined in_ZF;
  byte bVar5;
  
  bVar5 = 0;
  pbVar1 = (byte *)(*DAT_004245d8)(*(undefined8 *)(param_4 + 0x20));
  lVar3 = 7;
  pbVar4 = (byte *)"tk.tcl";
  do {
    if (lVar3 == 0) break;
    lVar3 = lVar3 + -1;
    in_CF = *pbVar1 < *pbVar4;
    in_ZF = *pbVar1 == *pbVar4;
    pbVar1 = pbVar1 + (ulong)bVar5 * -2 + 1;
    pbVar4 = pbVar4 + (ulong)bVar5 * -2 + 1;
  } while ((bool)in_ZF);
  if ((!(bool)in_CF && !(bool)in_ZF) != (bool)in_CF) {
    return 1;
  }
  uVar2 = FUN_00405cc0(param_1,param_2,param_4);
  return uVar2;
}



undefined4 FUN_00405d80(long param_1,long param_2,char *param_3)

{
  uint uVar1;
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = false;
  if (param_3 == (char *)0x0) {
    uVar2 = *(ulong *)(param_2 + 0x10);
    if (uVar2 <= *(ulong *)(param_2 + 0x18) && *(ulong *)(param_2 + 0x18) != uVar2) {
      do {
        if (*(char *)(uVar2 + 0x11) == 'l') {
          param_3 = (char *)FUN_004029a0();
          if (param_3 == (char *)0x0) {
            return 0xffffffff;
          }
          bVar6 = true;
          goto LAB_00405da3;
        }
        uVar2 = FUN_00402970(param_2);
      } while (uVar2 < *(ulong *)(param_2 + 0x18));
    }
  }
  else {
LAB_00405da3:
    strncpy((char *)(param_1 + 0x10),param_3,0x10);
    strncpy((char *)(param_1 + 0x1010),param_3 + 0x10,0x10);
    strncpy((char *)(param_1 + 0x3010),param_3 + 0x30,0x10);
    FUN_004043a0(param_1 + 0x2010,param_2 + 0x2078,param_3 + 0x20);
    uVar3 = *(uint *)(param_3 + 0x40);
    uVar5 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    *(uint *)(param_1 + 0x4018) = uVar5;
    __dest = calloc(1,(long)(int)(uVar5 + 1));
    uVar3 = *(uint *)(param_3 + 0x48);
    *(void **)(param_1 + 0x4010) = __dest;
    uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    *(uint *)(param_1 + 0x4028) = uVar4;
    __dest_00 = malloc((long)(int)uVar4);
    uVar3 = *(uint *)(param_3 + 0x50);
    *(void **)(param_1 + 0x4020) = __dest_00;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    *(uint *)(param_1 + 0x4038) = uVar3;
    __dest_01 = malloc((long)(int)uVar3);
    *(void **)(param_1 + 0x4030) = __dest_01;
    if ((__dest_00 != (void *)0x0 && __dest != (void *)0x0) && (__dest_01 != (void *)0x0)) {
      uVar1 = *(uint *)(param_3 + 0x44);
      memcpy(__dest,param_3 + (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                              uVar1 << 0x18),(long)(int)uVar5);
      uVar5 = *(uint *)(param_3 + 0x4c);
      memcpy(__dest_00,
             param_3 + (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                       uVar5 << 0x18),(long)(int)uVar4);
      uVar4 = *(uint *)(param_3 + 0x54);
      memcpy(__dest_01,
             param_3 + (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                       uVar4 << 0x18),(long)(int)uVar3);
      if (bVar6) {
        free(param_3);
        return 0;
      }
      return 0;
    }
    FUN_00403350("Cannot allocate memory for necessary files.\n");
  }
  return 0xffffffff;
}



undefined8 FUN_00405f70(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (*(ulong *)(param_1 + 0x18) <= uVar1) {
    return 0;
  }
  do {
    if (*(char *)(uVar1 + 0x11) == 'l') {
      uVar2 = FUN_004029a0();
      return uVar2;
    }
    uVar1 = FUN_00402970(param_1);
  } while (uVar1 <= *(ulong *)(param_1 + 0x18) && *(ulong *)(param_1 + 0x18) != uVar1);
  return 0;
}



undefined8 FUN_00405fb0(long param_1,long param_2)

{
  char *__s;
  bool bVar1;
  int iVar2;
  int *__ptr;
  size_t sVar3;
  size_t sVar4;
  int *piVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *__s_00;
  char local_2038 [4096];
  char local_1038 [4104];
  
  __ptr = (int *)calloc(1,0x1014);
  if (*(int *)(param_2 + 0x4038) != 0) {
    bVar1 = false;
    uVar6 = 0;
    do {
      __s_00 = (char *)(*(long *)(param_2 + 0x4030) + uVar6);
      piVar5 = (int *)FUN_00403200(param_1,__s_00);
      if (piVar5 == (int *)0x0) {
        if (bVar1) {
          uVar7 = 0xffffffff;
          FUN_00403350("SPLASH: Cannot find requirement %s in archive.\n",__s_00);
          goto LAB_004060d4;
        }
      }
      else {
        __memcpy_chk(__ptr,piVar5,(long)*piVar5,0x1014);
        __s = (char *)((long)piVar5 + 0x12);
        FUN_004043a0((char *)((long)__ptr + 0x12),param_2 + 0x3010,__s);
        sVar4 = strlen(__s);
        sVar3 = strlen((char *)((long)__ptr + 0x12));
        *__ptr = (*piVar5 - (int)sVar4) + (int)sVar3;
        iVar2 = FUN_00402b50(param_1,__ptr);
        if (iVar2 != 0) {
          uVar7 = 0xfffffffe;
          FUN_00403350("SPLASH: Cannot extract requirement %s.\n",__s);
          goto LAB_004060d4;
        }
        bVar1 = true;
      }
      sVar4 = strlen(__s_00);
      uVar6 = uVar6 + 1 + sVar4;
    } while (uVar6 < (ulong)(long)*(int *)(param_2 + 0x4038));
    if (bVar1) {
      FUN_004043a0(local_1038,param_1 + 0x3078,param_2 + 0x3010);
      goto LAB_0040611f;
    }
  }
  strncpy(local_1038,(char *)(param_1 + 0x2078),0x1000);
LAB_0040611f:
  strncpy(local_2038,(char *)(param_2 + 0x10),0x1000);
  FUN_004043a0((char *)(param_2 + 0x10),local_1038,local_2038);
  strncpy(local_2038,(char *)(param_2 + 0x1010),0x1000);
  FUN_004043a0((char *)(param_2 + 0x1010),local_1038,local_2038);
  uVar7 = 0;
  FUN_00404380(local_2038,param_2 + 0x2010);
  FUN_004043a0(param_2 + 0x2010,local_1038,local_2038);
LAB_004060d4:
  free(__ptr);
  return uVar7;
}



undefined8 FUN_004061f0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_00407590(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x4048) = uVar1;
  lVar2 = FUN_00407590(param_1 + 0x1010);
  *(long *)(param_1 + 0x4050) = lVar2;
  if ((lVar2 != 0) && (*(long *)(param_1 + 0x4048) != 0)) {
    uVar1 = FUN_00406800(*(long *)(param_1 + 0x4048),lVar2);
    return uVar1;
  }
  FUN_00403350("LOADER: Failed to load tcl/tk libraries\n");
  return 0xffffffff;
}



void * FUN_00406250(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x4058);
  if (pvVar1 == (void *)0x0) {
    FUN_00403420("calloc","Cannot allocate memory for SPLASH_STATUS.\n");
  }
  return pvVar1;
}



void FUN_00406290(void **param_1)

{
  void *__ptr;
  
  __ptr = *param_1;
  if (__ptr != (void *)0x0) {
    if (*(void **)((long)__ptr + 0x4010) != (void *)0x0) {
      free(*(void **)((long)__ptr + 0x4010));
    }
    if (*(void **)((long)__ptr + 0x4020) != (void *)0x0) {
      free(*(void **)((long)__ptr + 0x4020));
    }
    if (*(void **)((long)__ptr + 0x4030) != (void *)0x0) {
      free(*(void **)((long)__ptr + 0x4030));
    }
    free(__ptr);
  }
  *param_1 = (void *)0x0;
  return;
}



undefined4 FUN_004062f0(code *param_1,int param_2,code *param_3,code *param_4)

{
  code **ppcVar1;
  undefined4 local_44;
  undefined8 local_40 [2];
  
  local_44 = 0;
  local_40[0] = 0;
  ppcVar1 = (code **)(*DAT_00424598)(0x40);
  *ppcVar1 = FUN_00405b50;
  ppcVar1[2] = param_1;
  *(int *)(ppcVar1 + 3) = param_2;
  ppcVar1[4] = (code *)local_40;
  ppcVar1[5] = (code *)&local_44;
  ppcVar1[6] = param_4;
  ppcVar1[7] = param_3;
  (*DAT_00424628)(&DAT_00424570);
  (*DAT_00424600)(*(undefined8 *)(param_1 + 8),ppcVar1,0);
  (*DAT_004245f8)(*(undefined8 *)(param_1 + 8));
  if (param_2 == 0) {
    (*DAT_00424608)(local_40,&DAT_00424570,0);
    (*DAT_00424620)(&DAT_00424570);
    (*DAT_00424618)(local_40);
  }
  else {
    (*DAT_00424620)(&DAT_00424570);
  }
  return local_44;
}



undefined8 FUN_004063d0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  lVar1 = param_1[1];
  lVar2 = (*DAT_00424630)();
  if (lVar1 == lVar2) {
    if (*param_1 != 0) {
      (*DAT_00424640)();
      *param_1 = 0;
      return 0;
    }
  }
  else {
    if (*param_1 != 0) {
      (*DAT_00424628)(&DAT_00424550);
      DAT_00424548 = 1;
      FUN_004062f0(param_1,1,0,0);
      (*DAT_00424608)(&DAT_00424558,&DAT_00424550,0);
      (*DAT_00424620)(&DAT_00424550);
      (*DAT_00424618)(&DAT_00424558);
    }
    (*DAT_00424650)();
    if (param_1[0x809] != 0) {
      dlclose();
      param_1[0x809] = 0;
      *(undefined4 *)((long)param_1 + 0x403c) = 0;
    }
    if (param_1[0x80a] != 0) {
      dlclose();
      param_1[0x80a] = 0;
      *(undefined4 *)(param_1 + 0x808) = 0;
    }
  }
  return 0;
}



int FUN_004064e0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  (*DAT_00424628)(&DAT_00424578);
  if ((*(long *)(param_1 + 0x4048) == 0) || (*(long *)(param_1 + 0x4050) == 0)) {
    iVar1 = -1;
  }
  else {
    (*DAT_00424660)(param_2);
    iVar1 = (*DAT_00424638)(param_1 + 8,FUN_004065b0,param_1,0,0);
    if (iVar1 == 0) {
      (*DAT_00424628)(&DAT_00424568);
      (*DAT_00424620)(&DAT_00424578);
      (*DAT_00424608)(&DAT_00424560,&DAT_00424568,0);
      (*DAT_00424620)(&DAT_00424568);
      (*DAT_00424618)(&DAT_00424560);
    }
    else {
      iVar1 = -1;
      FUN_00403350("SPLASH: Tcl is not threaded. Only threaded tcl is supported.\n");
      (*DAT_00424620)(&DAT_00424578);
      FUN_004063d0(param_1);
    }
  }
  return iVar1;
}



void FUN_004065b0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  (*DAT_00424628)(&DAT_00424578);
  DAT_00424548 = 0;
  uVar4 = (*DAT_00424668)();
  *param_1 = uVar4;
  if (param_1[1] == 0) {
    uVar9 = (*DAT_00424630)(uVar4);
    uVar4 = *param_1;
    param_1[1] = uVar9;
  }
  lVar5 = (*DAT_004245e0)(uVar4,"tclInit",FUN_00405be0,param_1,0);
  lVar6 = (*DAT_004245e0)(*param_1,"tcl_findLibrary",FUN_00405d20,param_1,0);
  lVar7 = (*DAT_004245e0)(*param_1,&DAT_0040975f,FUN_00405bf0,param_1,0);
  (*DAT_004245a8)(*param_1,"rename ::source ::_source",0xffffffff,0);
  lVar8 = (*DAT_004245e0)(*param_1,"source",FUN_00405c00,param_1,0);
  if ((lVar8 != 0) && ((lVar5 != 0 && lVar6 != 0) && lVar7 != 0)) {
    uVar1 = (*DAT_00424670)(*param_1);
    uVar2 = (*DAT_00424588)(*param_1);
    if ((uVar1 | uVar2) == 0) {
      *(undefined8 *)((long)param_1 + 0x403c) = 0x100000001;
      uVar4 = (*DAT_004245c8)(param_1[0x804],*(undefined4 *)(param_1 + 0x805));
      (*DAT_004245c0)(*param_1,"_image_data",0,uVar4,1);
      free((void *)param_1[0x804]);
      param_1[0x804] = 0;
      (*DAT_004245a8)(*param_1,param_1[0x802],*(undefined4 *)(param_1 + 0x803),1);
      (*DAT_00424628)(&DAT_00424568);
      (*DAT_00424610)(&DAT_00424560);
      (*DAT_00424620)(&DAT_00424568);
      while( true ) {
        iVar3 = (*DAT_00424580)();
        if ((iVar3 < 1) || (DAT_00424548 != 0)) break;
        (*DAT_00424658)(0);
      }
    }
  }
  FUN_004063d0(param_1);
  (*DAT_00424620)(&DAT_00424578);
  (*DAT_00424628)(&DAT_00424568);
  (*DAT_00424610)(&DAT_00424560);
  (*DAT_00424620)(&DAT_00424568);
  (*DAT_00424648)();
  (*DAT_00424628)(&DAT_00424550);
  (*DAT_00424610)(&DAT_00424558);
                    // WARNING: Could not recover jumptable at 0x004067b7. Too many branches
                    // WARNING: Treating indirect jump as call
  (*DAT_00424620)(&DAT_00424550);
  return;
}



void FUN_004067e0(undefined8 param_1,undefined8 param_2)

{
  FUN_004062f0(param_1,1,param_2,FUN_00405bb0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_00406800(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  DAT_00424670 = dlsym(param_1,"Tcl_Init");
  if (DAT_00424670 == 0) {
    FUN_00403350("Cannot dlsym for Tcl_Init\n");
    uVar1 = 0xffffffff;
  }
  else {
    DAT_00424668 = dlsym(param_1,"Tcl_CreateInterp");
    if (DAT_00424668 == 0) {
      FUN_00403350("Cannot dlsym for Tcl_CreateInterp\n");
      uVar1 = 0xffffffff;
    }
    else {
      DAT_00424660 = dlsym(param_1,"Tcl_FindExecutable");
      if (DAT_00424660 == 0) {
        FUN_00403350("Cannot dlsym for Tcl_FindExecutable\n");
        uVar1 = 0xffffffff;
      }
      else {
        DAT_00424658 = dlsym(param_1,"Tcl_DoOneEvent");
        if (DAT_00424658 == 0) {
          FUN_00403350("Cannot dlsym for Tcl_DoOneEvent\n");
          uVar1 = 0xffffffff;
        }
        else {
          DAT_00424650 = dlsym(param_1,"Tcl_Finalize");
          if (DAT_00424650 == 0) {
            FUN_00403350("Cannot dlsym for Tcl_Finalize\n");
            uVar1 = 0xffffffff;
          }
          else {
            DAT_00424648 = dlsym(param_1,"Tcl_FinalizeThread");
            if (DAT_00424648 == 0) {
              FUN_00403350("Cannot dlsym for Tcl_FinalizeThread\n");
              uVar1 = 0xffffffff;
            }
            else {
              DAT_00424640 = dlsym(param_1,"Tcl_DeleteInterp");
              if (DAT_00424640 == 0) {
                FUN_00403350("Cannot dlsym for Tcl_DeleteInterp\n");
                uVar1 = 0xffffffff;
              }
              else {
                DAT_00424638 = dlsym(param_1,"Tcl_CreateThread");
                if (DAT_00424638 == 0) {
                  FUN_00403350("Cannot dlsym for Tcl_CreateThread\n");
                  uVar1 = 0xffffffff;
                }
                else {
                  DAT_00424630 = dlsym(param_1,"Tcl_GetCurrentThread");
                  if (DAT_00424630 == 0) {
                    FUN_00403350("Cannot dlsym for Tcl_GetCurrentThread\n");
                    uVar1 = 0xffffffff;
                  }
                  else {
                    DAT_00424628 = dlsym(param_1,"Tcl_MutexLock");
                    if (DAT_00424628 == 0) {
                      FUN_00403350("Cannot dlsym for Tcl_MutexLock\n");
                      uVar1 = 0xffffffff;
                    }
                    else {
                      DAT_00424620 = dlsym(param_1,"Tcl_MutexUnlock");
                      if (DAT_00424620 == 0) {
                        FUN_00403350("Cannot dlsym for Tcl_MutexUnlock\n");
                        uVar1 = 0xffffffff;
                      }
                      else {
                        DAT_00424618 = dlsym(param_1,"Tcl_ConditionFinalize");
                        if (DAT_00424618 == 0) {
                          FUN_00403350("Cannot dlsym for Tcl_ConditionFinalize\n");
                          uVar1 = 0xffffffff;
                        }
                        else {
                          DAT_00424610 = dlsym(param_1,"Tcl_ConditionNotify");
                          if (DAT_00424610 == 0) {
                            FUN_00403350("Cannot dlsym for Tcl_ConditionNotify\n");
                            uVar1 = 0xffffffff;
                          }
                          else {
                            DAT_00424608 = dlsym(param_1,"Tcl_ConditionWait");
                            if (DAT_00424608 == 0) {
                              FUN_00403350("Cannot dlsym for Tcl_ConditionWait\n");
                              uVar1 = 0xffffffff;
                            }
                            else {
                              DAT_00424600 = dlsym(param_1,"Tcl_ThreadQueueEvent");
                              if (DAT_00424600 == 0) {
                                FUN_00403350("Cannot dlsym for Tcl_ThreadQueueEvent\n");
                                uVar1 = 0xffffffff;
                              }
                              else {
                                DAT_004245f8 = dlsym(param_1,"Tcl_ThreadAlert");
                                if (DAT_004245f8 == 0) {
                                  FUN_00403350("Cannot dlsym for Tcl_ThreadAlert\n");
                                  uVar1 = 0xffffffff;
                                }
                                else {
                                  _DAT_004245f0 = dlsym(param_1,"Tcl_GetVar2");
                                  if (_DAT_004245f0 == 0) {
                                    FUN_00403350("Cannot dlsym for Tcl_GetVar2\n");
                                    uVar1 = 0xffffffff;
                                  }
                                  else {
                                    DAT_004245e8 = dlsym(param_1,"Tcl_SetVar2");
                                    if (DAT_004245e8 == 0) {
                                      FUN_00403350("Cannot dlsym for Tcl_SetVar2\n");
                                      uVar1 = 0xffffffff;
                                    }
                                    else {
                                      DAT_004245e0 = dlsym(param_1,"Tcl_CreateObjCommand");
                                      if (DAT_004245e0 == 0) {
                                        FUN_00403350("Cannot dlsym for Tcl_CreateObjCommand\n");
                                        uVar1 = 0xffffffff;
                                      }
                                      else {
                                        DAT_004245d8 = dlsym(param_1,"Tcl_GetString");
                                        if (DAT_004245d8 == 0) {
                                          FUN_00403350("Cannot dlsym for Tcl_GetString\n");
                                          uVar1 = 0xffffffff;
                                        }
                                        else {
                                          DAT_004245d0 = dlsym(param_1,"Tcl_NewStringObj");
                                          if (DAT_004245d0 == 0) {
                                            FUN_00403350("Cannot dlsym for Tcl_NewStringObj\n");
                                            uVar1 = 0xffffffff;
                                          }
                                          else {
                                            DAT_004245c8 = dlsym(param_1,"Tcl_NewByteArrayObj");
                                            if (DAT_004245c8 == 0) {
                                              FUN_00403350("Cannot dlsym for Tcl_NewByteArrayObj\n")
                                              ;
                                              uVar1 = 0xffffffff;
                                            }
                                            else {
                                              DAT_004245c0 = dlsym(param_1,"Tcl_SetVar2Ex");
                                              if (DAT_004245c0 == 0) {
                                                FUN_00403350("Cannot dlsym for Tcl_SetVar2Ex\n");
                                                uVar1 = 0xffffffff;
                                              }
                                              else {
                                                _DAT_004245b8 = dlsym(param_1,"Tcl_GetObjResult");
                                                if (_DAT_004245b8 == 0) {
                                                  FUN_00403350("Cannot dlsym for Tcl_GetObjResult\n"
                                                              );
                                                  uVar1 = 0xffffffff;
                                                }
                                                else {
                                                  DAT_004245b0 = dlsym(param_1,"Tcl_EvalFile");
                                                  if (DAT_004245b0 == 0) {
                                                    FUN_00403350("Cannot dlsym for Tcl_EvalFile\n");
                                                    uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_004245a8 = dlsym(param_1,"Tcl_EvalEx");
                                                    if (DAT_004245a8 == 0) {
                                                      FUN_00403350("Cannot dlsym for Tcl_EvalEx\n");
                                                      uVar1 = 0xffffffff;
                                                    }
                                                    else {
                                                      DAT_004245a0 = dlsym(param_1,"Tcl_EvalObjv");
                                                      if (DAT_004245a0 == 0) {
                                                        FUN_00403350(
                                                  "Cannot dlsym for Tcl_EvalObjv\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    DAT_00424598 = dlsym(param_1,"Tcl_Alloc");
                                                    if (DAT_00424598 == 0) {
                                                      FUN_00403350("Cannot dlsym for Tcl_Alloc\n");
                                                      uVar1 = 0xffffffff;
                                                    }
                                                    else {
                                                      DAT_00424590 = dlsym(param_1,"Tcl_Free");
                                                      if (DAT_00424590 == 0) {
                                                        FUN_00403350("Cannot dlsym for Tcl_Free\n");
                                                        uVar1 = 0xffffffff;
                                                      }
                                                      else {
                                                        DAT_00424588 = dlsym(param_2,"Tk_Init");
                                                        if (DAT_00424588 == 0) {
                                                          FUN_00403350("Cannot dlsym for Tk_Init\n")
                                                          ;
                                                          uVar1 = 0xffffffff;
                                                        }
                                                        else {
                                                          DAT_00424580 = dlsym(param_2,
                                                  "Tk_GetNumMainWindows");
                                                  if (DAT_00424580 == 0) {
                                                    FUN_00403350(
                                                  "Cannot dlsym for Tk_GetNumMainWindows\n");
                                                  uVar1 = 0xffffffff;
                                                  }
                                                  else {
                                                    uVar1 = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}



void FUN_00406df0(void)

{
  return;
}



void FUN_00406e00(int param_1)

{
  kill(DAT_00424680,param_1);
  return;
}



char * FUN_00406e10(char *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  size_t sVar2;
  char *__dest;
  char *__dest_00;
  long lVar3;
  size_t local_40;
  
  if (param_1 == (char *)0x0) {
    local_40 = 0;
    lVar3 = 1;
  }
  else {
    local_40 = strlen(param_1);
    lVar3 = local_40 + 1;
  }
  sVar1 = 0;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    lVar3 = lVar3 + sVar1;
  }
  sVar2 = 0;
  if (param_3 != (char *)0x0) {
    sVar2 = strlen(param_3);
  }
  __dest = (char *)malloc(sVar2 + lVar3);
  if (__dest != (char *)0x0) {
    *__dest = '\0';
    if ((local_40 == 0) || (__dest_00 = stpcpy(__dest,param_1), sVar1 == 0)) {
      if (sVar2 == 0) {
        return __dest;
      }
    }
    else {
      if (sVar2 == 0) {
        return __dest;
      }
      strcpy(__dest_00,param_2);
    }
    strcat(__dest,param_3);
    return __dest;
  }
  return (char *)0x0;
}



int FUN_00406ef0(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = getenv("LD_LIBRARY_PATH");
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 == '\0') {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)__strdup(pcVar2);
      if (pcVar2 != (char *)0x0) {
        setenv("LD_LIBRARY_PATH_ORIG",pcVar2,1);
      }
    }
  }
  pcVar2 = (char *)FUN_00406e10(param_1,&DAT_0040866b,pcVar2);
  iVar1 = setenv("LD_LIBRARY_PATH",pcVar2,1);
  free(pcVar2);
  return iVar1;
}



undefined8 FUN_00406f80(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = getenv(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = __strdup(pcVar1);
    return uVar2;
  }
  return 0;
}



void FUN_00406fb0(char *param_1,char *param_2)

{
  setenv(param_1,param_2,1);
  return;
}



// WARNING: Unknown calling convention -- yet parameter storage is locked

int unsetenv(char *__name)

{
  int iVar1;
  
  iVar1 = unsetenv(__name);
  return iVar1;
}



bool FUN_00406fd0(char *param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  sVar1 = strlen(param_1);
  if (param_1[sVar1 - 1] != '/') {
    *(undefined2 *)(param_1 + sVar1) = 0x2f;
    sVar1 = sVar1 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + sVar1);
  *puVar2 = 0x5858585849454d5f;
  *(undefined2 *)(puVar2 + 1) = 0x5858;
  *(undefined *)((long)puVar2 + 10) = 0;
  pcVar3 = mkdtemp(param_1);
  return pcVar3 != (char *)0x0;
}



undefined8 FUN_00407020(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  char *pcVar6;
  
  if (*(int *)(param_1 + 0x5078) == 1) {
    return 0;
  }
  lVar1 = param_1 + 0x3078;
  lVar3 = FUN_00403150(param_1,"pyi-runtime-tmpdir");
  if (lVar3 == 0) {
    ppuVar4 = &PTR_s_TMPDIR_0040a0c0;
    pcVar6 = "TMPDIR";
    do {
      pcVar6 = getenv(pcVar6);
      if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
        lVar3 = __strdup(pcVar6);
        if (lVar3 != 0) {
          __strcpy_chk(lVar1,lVar3,0x1000);
          iVar2 = FUN_00406fd0(lVar1);
          if (iVar2 != 0) goto LAB_0040711a;
        }
      }
      pcVar6 = ppuVar4[1];
      ppuVar4 = ppuVar4 + 1;
    } while (pcVar6 != (char *)0x0);
    ppuVar4 = &PTR_DAT_0040a0a0;
    puVar5 = &DAT_00409f6c;
    do {
      __strcpy_chk(lVar1,puVar5,0x1000);
      iVar2 = FUN_00406fd0(lVar1);
      if (iVar2 != 0) goto LAB_0040711a;
      puVar5 = ppuVar4[1];
      ppuVar4 = ppuVar4 + 1;
    } while (puVar5 != (undefined *)0x0);
  }
  else {
    __strcpy_chk(lVar1,lVar3,0x1000);
    iVar2 = FUN_00406fd0(lVar1);
    if (iVar2 != 0) {
LAB_0040711a:
      *(undefined4 *)(param_1 + 0x5078) = 1;
      return 0;
    }
  }
  FUN_00403350("INTERNAL ERROR: cannot create temporary directory!\n");
  return 0xffffffff;
}



void FUN_00407130(char *param_1)

{
  int iVar1;
  size_t sVar2;
  DIR *__dirp;
  dirent *pdVar3;
  int iVar4;
  stat sStack_10b8;
  char local_1028 [4112];
  
  strncpy(local_1028,param_1,0x1000);
  sVar2 = strlen(local_1028);
  iVar4 = (int)sVar2;
  if (local_1028[iVar4 + -1] != '/') {
    iVar4 = iVar4 + 1;
    __memcpy_chk(local_1028 + sVar2,&DAT_00409f36,2,0x1001 - sVar2);
  }
  __dirp = opendir(param_1);
  if (__dirp != (DIR *)0x0) {
    pdVar3 = readdir(__dirp);
    if (pdVar3 != (dirent *)0x0) {
LAB_0040722d:
      do {
        if (pdVar3->d_name[0] == '.') {
          if (pdVar3->d_name[1] != '\0') {
            if ((pdVar3->d_name[1] != '.') || (pdVar3->d_name[2] != '\0')) goto LAB_004071c8;
            pdVar3 = readdir(__dirp);
            if (pdVar3 == (dirent *)0x0) break;
            goto LAB_0040722d;
          }
        }
        else {
LAB_004071c8:
          local_1028[iVar4] = '\0';
          __strcat_chk(local_1028,pdVar3->d_name,0x1001);
          iVar1 = __lxstat(1,local_1028,&sStack_10b8);
          if (iVar1 == 0) {
            if ((sStack_10b8.st_mode & 0xf000) == 0x4000) {
              FUN_00407130();
            }
            else {
              unlink(local_1028);
            }
          }
        }
        pdVar3 = readdir(__dirp);
      } while (pdVar3 != (dirent *)0x0);
    }
    closedir(__dirp);
    rmdir(param_1);
  }
  return;
}



FILE * FUN_00407280(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  size_t sVar4;
  FILE *pFVar5;
  long lVar6;
  stat sStack_20b8;
  undefined2 local_2028;
  char local_1028 [4104];
  
  iVar1 = snprintf((char *)&local_2028,0x1000,"%s",param_1);
  if (0xfff < iVar1) {
    return (FILE *)0x0;
  }
  iVar1 = snprintf(local_1028,0x1000,"%s",param_2);
  if (0xfff < iVar1) {
    return (FILE *)0x0;
  }
  uVar2 = strlen((char *)&local_2028);
  pcVar3 = strtok(local_1028,"/");
  if (pcVar3 != (char *)0x0) {
    while( true ) {
      sVar4 = strlen(pcVar3);
      uVar2 = uVar2 + 1 + sVar4;
      if (0xffe < uVar2) {
        return (FILE *)0x0;
      }
      sVar4 = strlen((char *)&local_2028);
      *(undefined2 *)((long)&local_2028 + sVar4) = 0x2f;
      lVar6 = (long)&local_2028 + sVar4 + 1;
      __strcpy_chk(lVar6,pcVar3,local_1028 + -lVar6);
      pcVar3 = strtok((char *)0x0,"/");
      if (pcVar3 == (char *)0x0) break;
      iVar1 = __xstat(1,(char *)&local_2028,&sStack_20b8);
      if (iVar1 < 0) {
        mkdir((char *)&local_2028,0x1c0);
      }
    }
  }
  iVar1 = __xstat(1,(char *)&local_2028,&sStack_20b8);
  if (iVar1 == 0) {
    if (DAT_0040d29c == -1) {
      pcVar3 = getenv("PYINSTALLER_STRICT_UNPACK_MODE");
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
        do {
          invalidInstructionException();
        } while( true );
      }
      pcVar3 = (char *)__strdup(pcVar3);
      if ((*pcVar3 != '0') || (pcVar3[1] != '\0')) {
        DAT_0040d29c = 1;
        free(pcVar3);
        goto LAB_004073d4;
      }
      DAT_0040d29c = 0;
      free(pcVar3);
    }
    else if (DAT_0040d29c != 0) {
LAB_004073d4:
      FUN_00403350("ERROR: file already exists but should not: %s\n",&local_2028);
      return (FILE *)0x0;
    }
    FUN_00403350("WARNING: file already exists but should not: %s\n",&local_2028);
  }
  pFVar5 = fopen((char *)&local_2028,"wb");
  return pFVar5;
}



undefined8 FUN_00407470(char *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  FILE *__stream;
  FILE *__s;
  size_t sVar2;
  undefined8 uVar3;
  undefined auStack_1018 [4096];
  
  __stream = fopen(param_1,"rb");
  __s = (FILE *)FUN_00407280(param_2,param_3);
  if (__stream != (FILE *)0x0) {
    if (__s != (FILE *)0x0) {
      do {
        while( true ) {
          iVar1 = feof(__stream);
          if (iVar1 != 0) {
            uVar3 = 0;
            goto LAB_0040752f;
          }
          sVar2 = fread(auStack_1018,1,0x1000,__stream);
          if (sVar2 != 0) break;
          iVar1 = ferror(__stream);
          if (iVar1 != 0) {
            uVar3 = 0xffffffff;
            clearerr(__stream);
            goto LAB_0040752f;
          }
        }
        sVar2 = fwrite(auStack_1018,1,sVar2,__s);
      } while ((sVar2 != 0) && (iVar1 = ferror(__s), iVar1 == 0));
      uVar3 = 0xffffffff;
      clearerr(__s);
LAB_0040752f:
      iVar1 = fileno(__s);
      fchmod(iVar1,0x1c0);
      fclose(__stream);
      goto LAB_0040754b;
    }
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  uVar3 = 0xffffffff;
  if (__s == (FILE *)0x0) {
    return 0xffffffff;
  }
LAB_0040754b:
  fclose(__s);
  return uVar3;
}



void FUN_00407590(undefined8 param_1)

{
  dlopen(param_1,0x102);
  return;
}



void dlclose(void)

{
  dlclose();
  return;
}



void FUN_004075b0(long param_1)

{
  if (*(char *)(param_1 + 0x3078) != '\0') {
    FUN_00406ef0(param_1 + 0x3078);
    return;
  }
  FUN_00406ef0(param_1 + 0x2078);
  return;
}



int FUN_004075e0(void)

{
  __pid_t _Var1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  char acStack_28 [40];
  
  pcVar3 = getenv("LISTEN_PID");
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    lVar4 = __strdup(pcVar3);
    if (lVar4 != 0) {
      _Var1 = getpid();
      __snprintf_chk(acStack_28,0x17,1,0x17,&DAT_00409f46,(long)_Var1);
      iVar2 = setenv("LISTEN_PID",acStack_28,1);
      return iVar2;
    }
  }
  return 0;
}



undefined4 FUN_00407650(void)

{
  return DAT_00424680;
}



void FUN_00407660(void)

{
  if (DAT_0042467c == 0) {
    return;
  }
  raise(DAT_00424678);
  return;
}



undefined8 FUN_00407680(int param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  
  pvVar1 = calloc((long)(param_1 + 1),8);
  DAT_00424684 = 0;
  DAT_00424688 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    piVar4 = __errno_location();
    pcVar5 = strerror(*piVar4);
    FUN_00403350("LOADER: failed to allocate argv_pyi: %s\n",pcVar5);
    uVar3 = 0xffffffff;
  }
  else {
    uVar7 = 0;
    if (0 < param_1) {
      do {
        lVar2 = __strdup(*(undefined8 *)(param_2 + uVar7 * 8));
        if (lVar2 == 0) {
          piVar4 = __errno_location();
          pcVar5 = strerror(*piVar4);
          FUN_00403350("LOADER: failed to strdup argv[%d]: %s\n",uVar7 & 0xffffffff,pcVar5);
          return 0xffffffff;
        }
        lVar6 = (long)DAT_00424684;
        uVar7 = uVar7 + 1;
        DAT_00424684 = DAT_00424684 + 1;
        *(long *)((long)pvVar1 + lVar6 * 8) = lVar2;
      } while ((long)param_1 != uVar7);
    }
    uVar3 = 0;
  }
  return uVar3;
}



int FUN_00407750(char *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407680(param_2,param_3);
  if (-1 < iVar1) {
    iVar1 = execvp(param_1,DAT_00424688);
    return iVar1;
  }
  return -1;
}



uint FUN_00407780(char *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  __pid_t _Var4;
  long lVar5;
  uint uVar6;
  int iVar7;
  char **ppcVar8;
  char **ppcVar9;
  code *__handler;
  char **ppcVar10;
  uint local_2c [3];
  
  local_2c[0] = 0;
  iVar3 = FUN_00407680(param_3,param_4);
  ppcVar10 = DAT_00424688;
  if (iVar3 < 0) {
    if (0 < DAT_00424684) {
      ppcVar9 = DAT_00424688 + (ulong)(DAT_00424684 - 1) + 1;
      ppcVar8 = DAT_00424688;
      do {
        pcVar1 = *ppcVar8;
        ppcVar8 = ppcVar8 + 1;
        free(pcVar1);
      } while (ppcVar9 != ppcVar8);
    }
  }
  else {
    _Var4 = fork();
    ppcVar10 = DAT_00424688;
    if (-1 < _Var4) {
      if (_Var4 == 0) {
        FUN_004075e0();
        ppcVar10 = DAT_00424688;
        iVar3 = execvp(param_1,DAT_00424688);
        if (iVar3 < 0) {
          if (0 < DAT_00424684) {
            uVar6 = DAT_00424684 - 1;
            ppcVar9 = ppcVar10;
            do {
              pcVar1 = *ppcVar9;
              ppcVar9 = ppcVar9 + 1;
              free(pcVar1);
            } while (ppcVar10 + (ulong)uVar6 + 1 != ppcVar9);
          }
          free(ppcVar10);
          DAT_00424684 = 0;
          DAT_00424688 = (char **)0x0;
          return 1;
        }
      }
      __handler = FUN_00406df0;
      DAT_00424680 = _Var4;
      lVar5 = FUN_00403150(param_2,"pyi-bootloader-ignore-signals");
      if (lVar5 == 0) {
        __handler = FUN_00406e00;
      }
      iVar3 = 0;
      do {
        if ((iVar3 != 0x11) && (iVar3 != 0x14)) {
          signal(iVar3,__handler);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x41);
      _Var4 = waitpid(DAT_00424680,(int *)local_2c,0);
      iVar3 = 0;
      do {
        iVar7 = iVar3 + 1;
        signal(iVar3,(__sighandler_t)0x0);
        ppcVar10 = DAT_00424688;
        iVar3 = iVar7;
      } while (iVar7 != 0x41);
      if (0 < DAT_00424684) {
        ppcVar9 = DAT_00424688 + (ulong)(DAT_00424684 - 1) + 1;
        ppcVar8 = DAT_00424688;
        do {
          pcVar1 = *ppcVar8;
          ppcVar8 = ppcVar8 + 1;
          free(pcVar1);
        } while (ppcVar8 != ppcVar9);
      }
      free(ppcVar10);
      if (-1 < _Var4) {
        uVar6 = local_2c[0] & 0x7f;
        if (uVar6 == 0) {
          DAT_00424684 = 0;
          DAT_00424688 = (char **)0x0;
          return local_2c[0] >> 8 & 0xff;
        }
        cVar2 = (char)((char)uVar6 + '\x01') >> 1;
        DAT_0042467c = (uint)('\0' < cVar2);
        if ('\0' < cVar2) {
          DAT_00424678 = uVar6;
        }
      }
      DAT_00424688 = (char **)0x0;
      DAT_00424684 = 0;
      return 1;
    }
    if (0 < DAT_00424684) {
      ppcVar9 = DAT_00424688 + (ulong)(DAT_00424684 - 1) + 1;
      ppcVar8 = DAT_00424688;
      do {
        pcVar1 = *ppcVar8;
        ppcVar8 = ppcVar8 + 1;
        free(pcVar1);
      } while (ppcVar8 != ppcVar9);
    }
  }
  free(ppcVar10);
  DAT_00424684 = 0;
  DAT_00424688 = (char **)0x0;
  return 1;
}



undefined8 FUN_004079c0(void)

{
  int iVar1;
  void *__ptr;
  void *pvVar2;
  undefined8 uVar3;
  size_t __size;
  
  __ptr = (void *)__strdup();
  iVar1 = DAT_00424684;
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    __size = (long)(DAT_00424684 + 2) * 8;
    pvVar2 = realloc(DAT_00424688,__size);
    if (pvVar2 == (void *)0x0) {
      free(__ptr);
      uVar3 = 0xffffffff;
    }
    else {
      DAT_00424684 = iVar1 + 1;
      DAT_00424688 = pvVar2;
      *(void **)((long)pvVar2 + (__size - 0x10)) = __ptr;
      *(undefined8 *)((long)pvVar2 + (__size - 8)) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}



void FUN_00407a40(undefined4 *param_1,undefined8 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_00424684;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = DAT_00424688;
  }
  return;
}



void FUN_00407a60(void)

{
  void **ppvVar1;
  void *__ptr;
  void **__ptr_00;
  void **ppvVar2;
  
  __ptr_00 = DAT_00424688;
  if (0 < DAT_00424684) {
    ppvVar1 = DAT_00424688 + (ulong)(DAT_00424684 - 1) + 1;
    ppvVar2 = DAT_00424688;
    do {
      __ptr = *ppvVar2;
      ppvVar2 = ppvVar2 + 1;
      free(__ptr);
    } while (ppvVar2 != ppvVar1);
  }
  free(__ptr_00);
  DAT_00424684 = 0;
  DAT_00424688 = (void **)0x0;
  return;
}



long FUN_00407ac0(FILE *param_1,void *param_2,ulong param_3)

{
  long __off;
  long lVar1;
  int iVar2;
  void *__ptr;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  __ptr = malloc(0x2000);
  if (((__ptr != (void *)0x0) && (iVar2 = fseeko(param_1,0,2), -1 < iVar2)) &&
     (uVar3 = ftello(param_1), param_3 <= uVar3)) {
    while( true ) {
      uVar5 = 0x2000;
      if (0x1fff < uVar3) {
        uVar5 = uVar3;
      }
      __off = uVar5 - 0x2000;
      uVar3 = uVar3 - __off;
      if (((uVar3 < param_3) || (iVar2 = fseeko(param_1,__off,0), iVar2 < 0)) ||
         (uVar4 = __fread_chk(__ptr,0x2000,1,uVar3,param_1), uVar3 != uVar4)) break;
      lVar1 = (uVar3 - param_3) + 1;
      while (lVar6 = lVar1, lVar6 != 0) {
        iVar2 = memcmp((void *)((long)__ptr + lVar6 + -1),param_2,param_3);
        lVar1 = lVar6 + -1;
        if (iVar2 == 0) {
          lVar6 = (uVar5 - 0x2001) + lVar6;
          goto LAB_00407bbb;
        }
      }
      uVar3 = (uVar5 - 0x2001) + param_3;
      if (__off == 0) break;
    }
  }
  lVar6 = 0;
LAB_00407bbb:
  free(__ptr);
  return lVar6;
}



void FUN_00407bf0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  __DT_INIT();
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}



void FUN_00407c60(void)

{
  return;
}



void __DT_FINI(void)

{
  return;
}


