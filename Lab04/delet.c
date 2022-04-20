#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>


/// Codigo passado na aula da professora Roberta Lima Gomes apenas sendo utilizado para poder
/// rodar o codigo varias vezes caso necessario!!!



#define ADDKEY 123
struct shmid_ds buf ;
int main() {
    char path[] = "./" ;
    int shmid ;
    int size = 1024 ;

if (( shmid = shmget(ftok(path,ADDKEY),size,0)) == -1 ) {
    perror ("Erro shmget()") ;
    exit(1) ; }

if ((shmctl(shmid, IPC_RMID, NULL)) == -1)
{ 
    perror("Erro shmctl()") ;
    exit(1) ; }
    exit(0);
}