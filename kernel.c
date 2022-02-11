#include "kernel.h"

uint16 print(unsigned char ch) 
{
  uint16 ax = GREEN;
  uint8  al = 0;
  ax <<= 8;
  return (ax|= al = ch);
}


void kernel_entry()
{
  //A String That is to Be Printed on to the Console
  char str[] = "Hello World : )";

  // Pointer to the OUTPUT buffer;  0xB8000 is the address of vga buffer
  uint16* vga_buffer = (uint16*)0xB8000;

  //Clears the output buffer from any garbage values
  for(uint32 i = 0; i < BUFSIZE; i++)
      (vga_buffer)[i] = print(NULL);
      
  // Adds the string items to the vga buffer charecter by charecter
  for(uint32 i=0;str[i]!='\0';i++)
       vga_buffer[i] = print(str[i]);
}