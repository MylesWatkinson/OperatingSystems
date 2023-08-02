#include <stdio.h>
#include<windows.h>
#include <signal.h>

void intHandler(int dummy) {
    printf("Yeah!");
    signal(SIGINT, intHandler);
}

void hupHandler(int dummy) {
    printf("Ouch!");
    signal(SIGHUP, hupHandler);
}


int main()
{

    signal(SIGINT, intHandler);
    signal(SIGHUP, hupHandler);

    int n;

    printf("Input n value: ");
    scanf("%d", &n);

    for (int i = 0;i<=n*2;i+=2)
    {
        printf("%d\n", i);
        Sleep(500);
    }

    return 0;

}