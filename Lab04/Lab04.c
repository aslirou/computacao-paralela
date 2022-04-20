#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/shm.h>

#define ADDKEY 123
int main(){
int status;
pid_t filho;
int shmid; 
int size = 1024 ;
char *path="./" ;

if (( 
    shmid = shmget(ftok(path,ADDKEY), 
    size, 
    IPC_CREAT|IPC_EXCL|SHM_R|SHM_W)) == -1) 
{
    perror("Erro no shmget") ;
    exit(1) ;
}


int *var_comp = (int*)shmat(shmid, NULL, 0);

*var_comp = 1;
if(filho !=0)
{
    printf("var_comp = %d\n",*var_comp);
    filho = fork();
    
}
    
if (filho == 0)
{     
    *var_comp+= 2;  
    printf("vara_comp = %d\n",*var_comp);    
}
else
{
    wait(filho,&status,0);     
    *var_comp *= 4 ;
    printf("var_comp = %d\n",*var_comp);    
    }


return 0;
}