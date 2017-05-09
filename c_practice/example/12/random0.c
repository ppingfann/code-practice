static unsigned long int next;

int rand1()
{
  next = next * 1103515245 +12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand1(unsigned int seed)
{
  next = seed;
}


