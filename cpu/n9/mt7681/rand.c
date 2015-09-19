int
rand(void)
{
  return (int)apiRand();
}
/*--------------------------------------------------------------------------*/
/*
 *	It does nothing, since the rand already generates true random numbers.
 */
void
srand(unsigned int seed)
{
}
