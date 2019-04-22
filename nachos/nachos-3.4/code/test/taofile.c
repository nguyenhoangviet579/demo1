#include "syscall.h"
#define MAX_LENGTH 255

int main()
{
	int stdin;
	char fileName[MAX_LENGTH];
	int len;
	PrintString("tao mot file moi\n");
	PrintString("nhap ten file: ");
	
	stdin = Open("stdin", 2); // Goi ham Open mo file stdin nhap vao ten file
	if (stdin != -1)
	{
		len = Read(fileName, MAX_LENGTH, stdin); // Goi ham Read doc ten file vua nhap
		
		if(len <= 1)
			PrintString("Ten file khong hop le\n");
		else
		{
			if (CreateFile(fileName) == 0) // Goi ham CreateFile
			{
				PrintString("Tao file thanh cong\n");
			}
		}
		Close(stdin); // Goi ham Close de dong stdin
	}
	
	
	return 0;
}
