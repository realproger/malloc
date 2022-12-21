#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <assert.h>

#define u8 uint8_t
#define u16 uint16_t
#define STACK_SIZE 32
#define HEAP_SIZE STACK_SIZE * 4
#define HEADER 4


typedef struct virtual_memory
{
    u8 stack[STACK_SIZE];
    char** unmapped;
    u8 heap[HEAP_SIZE];

    struct
    {
        char** data;
        char** bss;
        char* text;
    }data_t;


}virtual_memory_t;


void* w_malloc(size_t size)
{

}

void w_free(void* ptr)
{

}

void test()
{
    int* a = w_malloc(sizeof(int))
}

int main(int argc, char** argv)
{
    return 0;
}