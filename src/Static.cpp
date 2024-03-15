// static outside of a class or struct will make it private to that translation unit
// Generally should be declaring variables as static since there can be naming conflicts during linking

static int s_num = 5;

static void Function()
{

}