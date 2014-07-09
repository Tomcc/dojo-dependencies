#ifndef _ZZIP_WRITE_H

#include <zzip/zzip.h>

_zzip_export
ZZIP_DIR*    zzip_dir_creat(zzip_char_t* name, int o_mode);
_zzip_export
int          zzip_file_mkdir(ZZIP_DIR* dir, zzip_char_t* name, int o_mode);
_zzip_export
ZZIP_FILE*   zzip_file_creat(ZZIP_DIR* dir, zzip_char_t* name, int o_mode);
_zzip_export
zzip_ssize_t zzip_file_write(ZZIP_FILE* file, 
                             const void* ptr, zzip_size_t len);
_zzip_export
ZZIP_DIR*    zzip_createdir(zzip_char_t* name, int o_mode);
_zzip_export
zzip_ssize_t zzip_write(ZZIP_FILE* file, const void* ptr, zzip_size_t len);
_zzip_export
zzip_size_t  zzip_fwrite(const void* ptr, zzip_size_t len, 
                         zzip_size_t multiply, ZZIP_FILE* file);

#endif /* _ZZIP_WRITE_H */
