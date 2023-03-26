#ifndef POINTER_H
#define POINTER_h

#include <stdbool.h>
#include <windows.h>

#define pointerHeight 40
#define pointerWidth 15

void InitPointer();
void MovePointer(int len, int* line);
void ShowPointer(HDC dc);
void ClearWindow (HDC dc);

#endif // POINTER_H