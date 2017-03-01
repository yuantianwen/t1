#include "os.h"
int osClose(SqlFile *file)
{
	return file->pMethod->xClose(file);
}
int osRead(SqlFile *file,void *buf,int buf_sz,int offset)
{
	return file->pMethod->xRead(file,buf,buf_sz,offset);
}
int osWrite(SqlFile *file,const void *content,int sz,int offset)
{
	return file->pMethod->xWrite(file,content,sz,offset);
}

int osOpen(SqlVFS *vfs,const char *filename,SqlFile *ret,int flags)
{
	return vfs->xOpen(vfs,filename,ret,flags);
}
int osDelete(SqlVFS *vfs,const char *filename)
{
	return vfs->xDelete(vfs,filename);
}
