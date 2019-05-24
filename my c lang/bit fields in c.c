/*
bit fields are used for the memory efficiency in the program so that less
memory can be used in the program.
we use ":" colon symbol after the deceleration and after the colon we define how
many bit is consume by the variable.
*/
struct bit
{
    unsigned int k:4;
    unsigned int m:4;
    unsigned int l:5;
};
main()
{
    struct bit b1={2,3,4};
    printf("%d",sizeof(b1));
}
