#include<stdio.h>
#include<ctype.h>
//声明一些未定义的函数
int can_print_it(char ch);
void print_letters(char arg[]);

//打印每一个字符对应的ASCII值
void print_arguments(int argc,char *argv[])
{
    int i = 0;
    for(i = 0;i < argc;i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    for(i = 0;arg[i] != '\0';i++) {
        char ch = arg[i];
        if(can_print_it(ch)) {
            printf("'%c' == %d ",ch,ch);
        }
    }

    printf("\n");
}

int can_print_it(char ch)
{
    return isalpha(ch) || isblank(ch);  //判断一个输入的字符是字母还是空格
}

int main(int argc,char *argv[])
{
    print_arguments(argc,argv);
    return 0;
}